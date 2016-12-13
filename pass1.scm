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
;;;  - Add ptype to the vars on acc data clauses
;;;  - Add present clause to acc for-loops
;;;

(define (create-type-ht xm)
  (rlet1 ht (make-hash-table 'string=?)
    (for-each
     (^[x]
       (hash-table-put!
        ht
        (sxml:attr x 'type)
        x))
     (sxml:content (xm-type-table xm))
     )))

(define (type-search ht type)
  (or (and-let* ([type]
                 [x (ref ht type #f)]
                 [n (sxml:attr
                     x
                     (case (sxml:name x)
                       [(pointerType) 'ref]
                       [(arrayType)   'element_type]
                       [(basicType)   'name]))])
        (type-search ht n))
      type))

(define (extract-global-env xm)
  (update-env '() (xm-global-symbols xm)))

(define (update-env env symbols)
  (cons
   (map
    (^[x] (cons ((ccc-sxpath "name") x) (sxml:attr x 'type)))
    ((sxpath "id") symbols))
   env))

;; Fetch the type of var-name
(define (var-ref env var-name)
  (and
   (pair? env)
   (or (assoc-ref (car env) var-name #f)
       (var-ref   (cdr env) var-name))
   ))

(define (insert-ptype-acc-data! type-ht env state)
  (let ([vars ((node-closure (ntype-names?? '(Var))) ((sxpath "list") state))])
    (for-each
     (^[v]
       (sxml:add-attr!
        v
        (list
         'ptype
         (type-search type-ht (var-ref env (sxml:car-content v))))))
     vars)))

(define (insert-ptype! type-ht env state)
  (define (rec-several! env ss)
    (for-each
     (cut rec! env <>)
     ss))

  (define (rec! env s)
    (case (sxml:name s)
      [(ACCPragma)
       (let1 c (sxml:content s)
         (when (equal? (sxml:car-content (~ c 0)) "DATA")
           (insert-ptype-acc-data! type-ht env s))
         (rec! env (~ c 2)))]

      [(functionDefinition compoundStatement)
       (let1 env (update-env env ((car-sxpath "symbols") s))
         (rec-several! env ((content-car-sxpath "body") s)))]

      [(doStatement whileStatment forStatement switchStatement)
       (rec-several! env ((content-car-sxpath "body") s))]

      [(ifStatement)
       (rec-several! env (map cadr (sxml:content s)))]
      ))

  (rec! env state))

(define (extract-acc-data-vars state)
  (map sxml:car-content ((sxpath "list/list/list/list/Var") state)))

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
  (define (insert-present-several! v ss)
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
       (insert-present! vars (~ cnt 2)))]

    [(functionDefinition compoundStatement
      doStatement whileStatment forStatement switchStatement)
     (insert-present-several! vars ((content-car-sxpath "body") state))]

    [(ifStatement)
     (insert-present! vars (map cadr (sxml:content state)))]
    ))

(define (pass1 xm)
  (rlet1 xm (xm-copy xm)
    (let ([type-ht (create-type-ht xm)]
          [env     (extract-global-env xm)]
          [defs    ((sxpath "functionDefinition")
                    (xm-global-declarations xm))])
      (for-each (cut insert-ptype!   type-ht env <>) defs)
      (for-each (cut insert-present! '() <>)         defs)
      )))
