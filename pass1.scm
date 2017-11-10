(define-module pass1
  (use util)
  (use xm)

  (use util.match)
  (use sxml.tools)
  (use sxml.sxpath)

  (export
   pass1
   ))
(select-module pass1)

;;;
;;; PASS1
;;;
;;; Set necessary informations
;;;
;;;  - Attach element_type and size attr to the vars on acc data clauses
;;;  - Attach shape attr to data clauses and expression arrayRef and pointerRef
;;;  - Attach present clause to acc for-loops
;;;

(define (create-type-ht xm)
  (rlet1 ht (make-hash-table 'string=?)
    (for-each
     (^[x] (hash-table-put! ht (sxml:attr x 'type) x))
     (sxml:content (xm-type-table xm))
     )))

(define (fetch-element-type decl)
  (sxml:attr
   decl
   (case (sxml:name decl)
     [(pointerType) 'ref]
     [(arrayType)   'element_type]
     [(basicType)   'name])))

(define (search-element-type ht type)
  (or (and-let* ([type]
                 [decl (ref ht type #f)]
                 [type (fetch-element-type decl)])
        (search-element-type ht type))
      type))

(define (search-array-shape ht type)
  (and-let* ([type] [decl (ref ht type #f)])
    (let1 inner (search-array-shape ht (fetch-element-type decl))
      (if (eq? (sxml:name decl) 'arrayType)
          (and-let1 s (sxml:attr decl 'array_size)
            (cons (gen-int-expr (string->number s)) (or inner '())))

          inner
          ))))

(define (extract-global-type-env xm)
  (update-type-env '() (xm-global-symbols xm)))

(define (update-type-env type-env symbols)
  (append
   (map
    (^[x] (cons ((ccc-sxpath "name") x) (sxml:attr x 'type)))
    ((sxpath "id") symbols))
   type-env))

;; Fetch the type of var-name
(define (fetch-type type-env varname)
  (assoc-ref type-env varname #f))

(define (fetch-shape shape-env varname)
  (assoc-ref shape-env varname #f))

(define (transfer-clause-name? name)
  (member
   name
   '("COPY"
     "COPYIN"
     "COPYOUT"
     "CREATE"
     "PRESENT"
     "PRESENT_OR_COPY"
     "PRESENT_OR_COPYIN"
     "PRESENT_OR_COPYOUT"
     "PRESENT_OR_CREATE"

     "HOST"
     "SELF"
     "DEVICE")))

(define (insert-size! state type-ht type-env)
  (for-each
   (lambda (c)
     (match1 (sxml:content c)
             (('string (? transfer-clause-name? _)) args)
       (sxml:change-content!
        args
        (map
         (lambda (x)
           (or
            (and-let* ([(eq? (sxml:name x) 'Var)]
                       [varname (sxml:car-content x)]
                       [type    (fetch-type type-env varname)]
                       [shape   (search-array-shape type-ht type)])
              `(list
                ,x
                ,@(map (lambda (s) `(list ,(gen-int-expr 0) s)) shape)
                ))
            x))
         (sxml:content args)))))

   ((content-car-sxpath "list") state)))

(define (insert-element-type! state type-ht type-env shape-env)
  (let1 vars ((sxpath '(list list list list Var)) state)
    (for-each
     (^[v]
       (let* ([varname (sxml:car-content v)]
              [type  (fetch-type type-env varname)]
              [shape (or (fetch-shape shape-env varname)
                         (search-array-shape type-ht type))])
         (unless shape
           (error #"Can't determine the shape of type ~type"))
         (sxml:add-attr!
          v (list 'element_type (search-element-type type-ht type)))
         (sxml:add-attr! v (list 'shape (serialize-shape shape)))
         ))
     vars)))

(define (extract-data-shape clauses)
  (let1 var-list
      (concatenate
       (filter-map
        (match-lambda [('list ('string (? transfer-clause-name? _))
                              ('list . args)) args]
                      [else #f])
        (cdr clauses)))

    (filter-map
     (match-lambda [('list ('Var varname) ('list lb len) ...) (cons varname len)]
                   [else #f])
     var-list)
    ))

(define (insert-data-info! state type-ht type-env)
  (define (rec-multi! ss type-env shape-env)
    (for-each
     (cut rec! <> type-env shape-env)
     ss))

  (define (rec! s type-env shape-env)
    (case (sxml:name s)
      [(ACCPragma)
       (let1 m (#/DATA|UPDATE/ (sxml:car-content (sxml:car-content s)))
         (when m (insert-size! s type-ht type-env))
         (let* ([c (sxml:content s)]
                [shape-env (append (extract-data-shape (~ c 1)) shape-env)])
           (when m (insert-element-type! s type-ht type-env shape-env))
           (when (>= (length c) 3) (rec! (~ c 2) type-env shape-env))))]

      [(functionDefinition compoundStatement)
       (let1 type-env (update-type-env type-env ((car-sxpath "symbols") s))
         (rec-multi! ((content-car-sxpath "body") s) type-env shape-env))]

      [(doStatement whileStatment forStatement switchStatement)
       (rec-multi! ((content-car-sxpath "body") s) type-env shape-env)]

      [(ifStatement)
       (rec-multi! (map cadr (sxml:content s)) type-env shape-env)]

      [else
       ;; TODO:
       ;; arrayRef, pointerRef
       ;; (let-values ([(var idx) (extract-indexing s)])
       ;;   (dprint var)
       ;;   (dprint idx)
       ;;   )
       #f
       ]
      ))

  (rec! state type-env '()))

(define (extract-acc-data-vars state)
  (map
   sxml:car-content
   (append ((sxpath "list/list/list/Var") state)
           ((sxpath "list/list/list/list/Var") state))))

(define (make-present-clause vars)
  `
  (list
   (string "PRESENT")
   (list
    ,@(map (cut list 'Var <>) vars)
    )))

(define (insert-present-acc-for! state vars)
  (unless (null? vars)
    (let1 clauses ((car-sxpath "list") state)
      (sxml:change-content!
       clauses
       (cons (make-present-clause vars) (sxml:content clauses)))
      )))

(define (insert-present! state vars)
  (define (insert-present-multi! ss v)
    (for-each
     (cut insert-present! <> v)
     ss))

  (case (sxml:name state)
    [(ACCPragma)
     (let* ([cnt     (sxml:content state)]
            [dirname ((ccc-sxpath "string") state)]
            [vars (match1 dirname "DATA"
                    (append (extract-acc-data-vars state) vars)
                    vars)])
       (match1 dirname "PARALLEL"
         (insert-present-acc-for! state vars))
       (when (>= (length cnt) 3)
         (insert-present! (~ cnt 2) vars)))]

    [(functionDefinition compoundStatement
      doStatement whileStatment forStatement switchStatement)
     (insert-present-multi! ((content-car-sxpath "body") state) vars)]

    [(ifStatement)
     (insert-present-multi! (map cadr (sxml:content state)) vars)]
    ))

(define (pass1 xm)
  (rlet1 xm (xm-copy xm)
    (let ([type-ht  (create-type-ht xm)]
          [type-env (extract-global-type-env xm)]
          [defs     ((sxpath "functionDefinition")
                     (xm-global-declarations xm))])
      (for-each (cut insert-data-info! <> type-ht type-env) defs)
      (for-each (cut insert-present!   <> '())              defs)
      )))
