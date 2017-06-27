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
;;;  - Attach ptype and size attr to the vars on acc data clauses
;;;  - Attach present clause to acc for-loops
;;;

(define (create-type-ht xm)
  (rlet1 ht (make-hash-table 'string=?)
    (for-each
     (^[x] (hash-table-put! ht (sxml:attr x 'type) x))
     (sxml:content (xm-type-table xm))
     )))

(define (fetch-inner-type decl)
  (sxml:attr
   decl
   (case (sxml:name decl)
     [(pointerType) 'ref]
     [(arrayType)   'element_type]
     [(basicType)   'name])))

(define (search-inner-type ht type)
  (or (and-let* ([type]
                 [decl (ref ht type #f)]
                 [type (fetch-inner-type decl)])
        (search-inner-type ht type))
      type))

(define (search-array-size ht type)
  (and-let* ([type] [decl (ref ht type #f)])
    (if (eq? (sxml:name decl) 'arrayType)
        (and-let1 s (sxml:attr decl 'array_size)
          (string->number s))

        (search-array-size ht (fetch-inner-type decl))
        )))

(define (extract-global-env xm)
  (update-env '() (xm-global-symbols xm)))

(define (update-env env symbols)
  (append
   (map
    (^[x] (cons ((ccc-sxpath "name") x) (sxml:attr x 'type)))
    ((sxpath "id") symbols))
   env))

;; Fetch the type of var-name
(define (fetch-type env var-name)
  (assoc-ref env var-name #f))

(define (insert-size-acc-data! type-ht env state)
  (for-each
   (lambda (c)
     (match1 (sxml:content c)
             (('string (or "COPY"
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
                           "DEVICE")) args)
       (sxml:change-content!
        args
        (map
         (lambda (x)
           (or
            (and-let* ([(eq? (sxml:name x) 'Var)]
                       [varname    (sxml:car-content x)]
                       [type       (fetch-type env varname)]
                       [array-size (search-array-size type-ht type)])
              `(list
                ,x
                (list
                 ,(gen-int-expr 0)
                 ,(gen-int-expr array-size))))
            x))
         (sxml:content args)))))

   ((content-car-sxpath "list") state)))

(define (insert-ptype-acc-data! type-ht env state)
  (let ([vars ((node-closure (ntype-names?? '(Var))) ((sxpath "list") state))])
    (for-each
     (^[v]
       (sxml:add-attr!
        v
        (list
         'ptype
         (search-inner-type type-ht (fetch-type env (sxml:car-content v))))))
     vars)))

(define (insert-data-info-acc-data! type-ht env state)
  (insert-size-acc-data!  type-ht env state)
  (insert-ptype-acc-data! type-ht env state))

(define (insert-data-info! type-ht env state)
  (define (rec-multi! env ss)
    (for-each
     (cut rec! env <>)
     ss))

  (define (rec! env s)
    (case (sxml:name s)
      [(ACCPragma)
       (let1 c (sxml:content s)
         (match1 (sxml:car-content (~ c 0)) (or "DATA" "UPDATE")
           (insert-data-info-acc-data! type-ht env s))
         (when (>= (length c) 3) (rec! env (~ c 2))))]

      [(functionDefinition compoundStatement)
       (let1 env (update-env env ((car-sxpath "symbols") s))
         (rec-multi! env ((content-car-sxpath "body") s)))]

      [(doStatement whileStatment forStatement switchStatement)
       (rec-multi! env ((content-car-sxpath "body") s))]

      [(ifStatement)
       (rec-multi! env (map cadr (sxml:content s)))]
      ))

  (rec! env state))

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

(define (insert-present-acc-for! vars state)
  (unless (null? vars)
    (let1 clauses ((car-sxpath "list") state)
      (sxml:change-content!
       clauses
       (cons (make-present-clause vars) (sxml:content clauses)))
      )))

(define (insert-present! vars state)
  (define (insert-present-multi! v ss)
    (for-each
     (cut insert-present! v <>)
     ss))

  (case (sxml:name state)
    [(ACCPragma)
     (let* ([cnt     (sxml:content state)]
            [dirname ((ccc-sxpath "string") state)]
            [vars (match1 dirname "DATA"
                    (append (extract-acc-data-vars state) vars)
                    vars)])
       (match1 dirname "PARALLEL"
         (insert-present-acc-for! vars state))
       (when (>= (length cnt) 3)
         (insert-present! vars (~ cnt 2))))]

    [(functionDefinition compoundStatement
      doStatement whileStatment forStatement switchStatement)
     (insert-present-multi! vars ((content-car-sxpath "body") state))]

    [(ifStatement)
     (insert-present! vars (map cadr (sxml:content state)))]
    ))

(define (pass1 xm)
  (rlet1 xm (xm-copy xm)
    (let ([type-ht (create-type-ht xm)]
          [env     (extract-global-env xm)]
          [defs    ((sxpath "functionDefinition")
                    (xm-global-declarations xm))])
      (for-each (cut insert-data-info! type-ht env <>) defs)
      (for-each (cut insert-present!   '() <>)         defs)
      )))
