(use sxml.ssax)
(use sxml.serializer)
(use sxml.sxpath)
(use sxml.tools)
(add-load-path ".." :relative)
(use util)

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
  (for-each
   (lambda (x)
     (for-each
      (lambda (y)
        (and-let* ([oldname (let1 c (sxml:content y) (and (pair? c) (car c)))]
                   [newname (string-append oldname (NEWSYM))])
          (sxml:change-content! y (list newname))

          (for-each
           (lambda (z)
             (when (equal? (car (sxml:content z)) oldname)
               (sxml:change-content! z (list newname))))
           ((sxpath `(// symbols id name)) x))

          (for-each
           (lambda (z)
             (when (equal? (car (sxml:content z)) oldname)
               (sxml:change-content! z (list newname))))

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
      (append ((sxpath '(// params name)) x)
              ((sxpath '(// declarations varDecl name)) x))))
   ((sxpath '(// functionDefinition)) sxml)
   ))

(define (rename sxml)
  (rename-proto-args! sxml)
  (rename-struct! sxml)
  (rename-var! sxml)
  sxml)

(define (main args)
  (let* ([iport    (current-input-port)]
         [oport    (current-output-port)]
         [sxml-in  (~ (ssax:xml->sxml iport '()) 2)]
         [sxml-out (rename sxml-in)])
    (srl:sxml->xml sxml-out oport))
  0)
