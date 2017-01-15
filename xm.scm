(define-module xm
  (use sxml.tools)
  (use sxml.sxpath)
  (use gauche.record)
  (use util.match)
  (use srfi-11)

  (use util)

  (export
   make-xm
   xm-attributes
   xm-type-table
   xm-global-symbols
   xm-global-declarations

   sxml->xm
   xm->sxml
   xm-copy

   gen-compound
   gen-compound-with-local-vars
   gen-=-expr
   gen-var=-expr
   gen-var=int-expr
   gen-=
   gen-var=
   gen-var=int
   gen-funcall
   gen-funcall-expr
   gen-arrayref-int-var-expr
   gen-barrier
   gen-if
   gen-!-expr
   gen-!var-expr
   gen-&&-expr
   gen-OR-expr
   gen-==-expr
   gen-!=-expr
   gen-<-expr
   gen-var<-expr
   gen-var<var-expr
   gen-<=-expr
   gen-var<=-expr
   gen-var<=var-expr
   gen-var++-expr
   gen-for
   gen-int-expr
   ))
(select-module xm)

(define-record-type xm #t #t
  attributes
  (type-table)
  (global-symbols)
  (global-declarations))

(define (xm-copy xm)
  (make-xm
   (list-copy-deep (xm-attributes xm))
   (list-copy-deep (xm-type-table xm))
   (list-copy-deep (xm-global-symbols xm))
   (list-copy-deep (xm-global-declarations xm))))

(define (sxml->xm sxml)
  (make-xm
   (sxml:attr-list                    sxml)
   ((car-sxpath "typeTable")          sxml)
   ((car-sxpath "globalSymbols")      sxml)
   ((car-sxpath "globalDeclarations") sxml)))

(define (xm->sxml xm)
  (sxml:change-attrlist
   (list 'XcodeProgram
         (xm-type-table xm)
         (xm-global-symbols xm)
         (xm-global-declarations xm))
   (xm-attributes xm)))

(define (gen-compound . states)
  `(compoundStatement
    (symbols)
    (declarations)
    (body
     ,@states)))

;; lvar ::= '(type name) | '(type name value)
(define (gen-compound-with-local-vars local-vars . states)
  (define (gen-id type name sclass)
    `(id (@ (type ,type) (sclass ,sclass)) (name ,name)))

  (define (gen-decl name value)
    `(varDecl (name ,name) ,@(if value `((value ,value)) '())))

  (define local-var->id&decl
    (match-lambda
     [(type name)
      (values
       (gen-id type name "auto")
       (gen-decl name #f))]

     [(type name value)
      (values
       (gen-id type name "auto")
       (gen-decl name value))]

     [(type name value sclass)
      (values
       (gen-id type name sclass)
       (gen-decl name value))]
     ))

  (let-values ([(ids decls) (values-map local-var->id&decl local-vars)])
    `
    (compoundStatement
     (symbols ,@ids)
     (declarations ,@decls)
     (body ,@states))
    ))

(define-syntax define-binop-expr
  (syntax-rules ()
    [(_ name label)
     (define (name l r)
       (list label l r))]))

(define-binop-expr gen-=-expr 'assignExpr)

(define (gen-var=-expr varname rvalue)
  (gen-=-expr `(Var ,varname) rvalue))

(define (gen-var=int-expr varname n)
  (gen-var=-expr varname (gen-int-expr n)))

(define-syntax define-binop-state
  (syntax-rules ()
    [(_ name gen-expr)
     (define (name l r)
       `(exprStatement ,(gen-expr l r)))]))

(define-binop-state gen-=       gen-=-expr)
(define-binop-state gen-var=    gen-var=-expr)
(define-binop-state gen-var=int gen-var=int-expr)

(define (gen-funcall fun-name . args)
  `(exprStatement
    ,(apply gen-funcall-expr fun-name args)))

(define (gen-funcall-expr fun-name . args)
  `
  (functionCall
   (function
    (funcAddr ,fun-name))
   (arguments
    ,@args)))

(define (gen-arrayref-int-var-expr array-name varname)
  `(arrayRef (@ (type "int")) (arrayAddr ,array-name) (Var ,varname)))

(define (gen-barrier)
  '(OMPPragma (string "BARRIER") (list)))

(define gen-if
  (match-lambda*
   [(cond then)
    `(ifStatement
      (condition ,cond)
      (then ,then))]

   [(cond then else)
    `(ifStatement
      (condition ,cond)
      (then ,then)
      (else ,else))]))

(define (gen-!-expr e)
  `(logNotExpr ,e))

(define (gen-!var-expr varname)
  (gen-!-expr `(Var ,varname)))

(define-syntax define-log-chain
  (syntax-rules ()
    [(_ name label nil)
     (define (name . args)
       (match args
         [()  nil]
         [(x) x]
         [else
          (list
           label
           (car args)
           (apply name (cdr args)))]))]
    ))

(define-log-chain gen-&&-expr 'logAndExpr (gen-int-expr 1))
(define-log-chain gen-OR-expr 'logOrExpr  (gen-int-expr 0))

(define-binop-expr gen-==-expr 'logEQExpr)
(define-binop-expr gen-!=-expr 'logNEQExpr)
(define-binop-expr gen-<=-expr 'logLEExpr)
(define-binop-expr gen-<-expr  'logLTExpr)

(define (gen-var<=-expr varname r)
  (gen-<=-expr `(Var ,varname) r))

(define-syntax define-gen-varOP-expr
  (syntax-rules ()
    [(_ name gen)
     (define (name varname r)
       (gen `(Var ,varname) r))]
    ))

(define-syntax define-gen-varOPvar-expr
  (syntax-rules ()
    [(_ name gen)
     (define (name lvarname rvarname)
       (gen `(Var ,lvarname) `(Var ,rvarname)))]
    ))

(define-gen-varOP-expr    gen-var<-expr     gen-<-expr)
(define-gen-varOPvar-expr gen-var<var-expr  gen-<-expr)
(define-gen-varOP-expr    gen-var<=-expr    gen-<=-expr)
(define-gen-varOPvar-expr gen-var<=var-expr gen-<=-expr)

(define (gen-var++-expr varname)
  `(postIncrExpr (Var ,varname)))

(define-syntax gen-for
  (syntax-rules ()
    [(_ (init-expr cond-expr iter-expr) body-state ...)
     `(forStatement
       (init      ,init-expr)
       (condition ,cond-expr)
       (iter      ,iter-expr)
       (body
        ,body-state ...))]
    ))

(define (gen-int-expr n)
  `(intConstant ,(number->string n)))
