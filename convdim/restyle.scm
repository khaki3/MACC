(use sxml.ssax)
(use sxml.serializer)
(use sxml.sxpath)
(use sxml.tools)
(add-load-path ".." :relative)
(use util)
(use xm)
(use util.match)

(define COUNT 0)
(define (NEWSYM)
  (begin0
   #"__RN_~COUNT"
   (inc! COUNT)))

(define (rename-proto-args! sxml)
  (for-each
   (lambda (x)
     (sxml:change-content! x (list (NEWSYM))))
   ((sxpath '(// functionType params name)) sxml)))

(define (rename-struct! sxml)
  ;; TODO : rename array name in struct
  )

(define (rename-var! sxml)
  (define arraytypes
    ((sxpath '(// arrayType)) sxml))

  (for-each
   (lambda (x)
     (for-each
      (lambda (y)
        (and-let* ([oldname (let1 c (sxml:content y) (and (pair? c) (car c)))]
                   [newname (string-append oldname (NEWSYM))]
                   [rename  (lambda (z)
                              (when (equal? (car (sxml:content z)) oldname)
                                (sxml:change-content! z (list newname))))])
          (sxml:change-content! y (list newname))

          ;; arraySize using const int
          (for-each
           (lambda (id)
             (for-each 
              (lambda (z)
                (when (equal? (sxml:attr z 'type) id)
                  (rename z)))
              ((sxpath '(// Var)) arraytypes)))
           ((sxpath '(// id @ type *text*)) x))

          ;; symbol
          (for-each
           rename
           ((sxpath '(// symbols id name)) x))

          ;; variable reference
          (for-each
           rename
           ((sxpath
             `(// ,(make-sxpath-query
                    (lambda (z)
                      (and (pair? z)
                           (memq (car z)
                                 '(Var varAddr arrayRef arrayAddr
                                   pointerRef memberAddr memberRef
                                   memberArrayRef memberArrayAddr)))
                      ))))
            x))
          ))
      (append ((sxpath '(params name)) x)
              ((sxpath '(declarations varDecl name)) x))))
   (append ((sxpath '(// functionDefinition)) sxml)
           ((sxpath '(// compoundStatement)) sxml))
   ))

(define (rename sxml)
  (rename-proto-args! sxml)
  (rename-struct! sxml)
  (rename-var! sxml)
  sxml)

(define NEW_TYPE_COUNT 0)

(define (new-pointer-type)
  #"R_P~(inc! NEW_TYPE_COUNT)")

(define (add-pointer! xm type)
  (rlet1 ptype (new-pointer-type)
    (sxml:content-push!
     (xm-type-table xm)
     `(pointerType (@ (type ,ptype) (ref ,type))))))

(define (redefine-global-arrays! xm)
  (filter-map
   (lambda (x)
     (and-let* ([varname ((car-sxpath '(name *text*)) x)]

                [at ((if-car-sxpath
                      `((arrayType
                         (@ (type
                             (*text*
                              ,(make-sxpath-query
                                (cut equal? <> (sxml:attr x 'type)))
                              ))))))
                     (xm-type-table xm))]

                [decl ((if-car-sxpath
                        `((varDecl
                           (name
                            (*text*
                             (,(make-sxpath-query
                                (cut equal? <> varname)))
                             )))))
                       (xm-global-declarations xm))]

                ;; decl has no value
                [(not ((if-sxpath '(value)) decl))]

                [atype (sxml:attr at 'type)]
                [etype (sxml:attr at 'element_type)]
                [ssize (sxml:attr at 'array_size)]
                [size  (string->number ssize)]

                [ptype (add-pointer! xm etype)])

       (sxml:change-attr! x `(type ,ptype))
       (list varname size etype)
       ))

   (xm-global-symbols xm)))

(define (insert-alloc-to-main! xm decls)
  (let1 main-body
      ((if-car-sxpath
        '(// (functionDefinition (name (equal? "main"))) body))
       (xm-global-declarations xm))

    (unless main-body
      (error "Can't locate the definition of main."))

    (sxml:change-content!
     main-body
     (list

      (apply gen-compound

       (append
        (map
         (match-lambda1 (varname size type)
           (gen-var=
            varname
            (gen-funcall-expr
             "malloc_managed"
             `(mulExpr
               ,(gen-int-expr size)
               (sizeOfExpr (typeName (@ (type ,type))))))))
         decls)

        (cdr main-body))

       )))
    ))

(define (redefine-arrays! xm)
  ;; todo local arrays
  (redefine-global-arrays! xm))

;; static -> dynamic (malloc)
(define (replace-global-arrays xm)
  (insert-alloc-to-main! xm (redefine-arrays! xm))
  xm)

(define (restyle sxml args)
  (match args
   [(_ "-n") (rename sxml)]
   [(_ "-a") (xm->sxml (replace-global-arrays (sxml->xm sxml)))]))

(define (main args)
  (let* ([iport    (current-input-port)]
         [oport    (current-output-port)]
         [sxml-in  (~ (ssax:xml->sxml iport '()) 2)]
         [sxml-out (restyle sxml-in args)])
    (srl:sxml->xml sxml-out oport))
  0)
