(define-module analysis
  (use util)
  (use xm)

  (use srfi-1)
  (use srfi-11)
  (use util.match)
  (use sxml.tools)
  (use sxml.sxpath)
  (use gauche.collection)

  (export
   extract-indexes-collections
   ))
(select-module analysis)

;;
;; Extract indexes in the form of alist of array and indexes for each USE and DEF.
;;
(define (extract-indexes-collections state)
  (let* ([indexes (gather-indexes state '())]
         [undefs  (gather-undefs  state)]
         [indexes (normalize-indexes indexes undefs)])
    (map collect-indexes (group-indexes indexes))))

(define (collect-indexes indexes)
  (let1 varname (cadar indexes)
    (let loop ([indexes indexes] [use '()] [def '()])
      (if (null? indexes)
          (list varname use def)

          (let ([head (car indexes)] [rest (cdr indexes)])
            (match-let1 (label _ expr) head
              (if (eq? label 'USE)
                  (loop rest (and use expr (cons expr use)) def)
                  (loop rest use (and def expr (cons expr def)))
                  )))))))

(define (group-indexes indexes)
  (group-collection indexes :key cadr :test string=?))

(define (normalize-indexes indexes undefs)
  (map
   (match-lambda1 (label var expr)
     (list label
           var
           (and-let* ([ne (normalize-expr expr undefs)] [(affine? ne)]) ne)))
   indexes))

(define (normalize-expr expr undefs)
  (define (rec e)
    (normalize-expr e undefs))

  (define (rec-multi es)
    (let ([res (map rec es)])
      (and (every values res) res)))

  (if (not (sxml:element? expr)) expr
      (let1 c (sxml:content expr)
        (case (sxml:name expr)
          [(assignExpr)
           (rec (~ c 1))]

          [(postIncrExpr postDecrExpr)
           (rec (~ c 0))]

          [(preIncrExpr preDecrExpr)
           (list (if (eq? (sxml:name expr) preIncrExpr) plusExpr minusExpr)
                 (rec (~ c 0))
                 (gen-int-expr 1))]

          [(asgPlusExpr asgMinusExpr asgMulExpr asgDivExpr
            asgModExpr asgLshiftExpr asgRshiftExpr asgBitAndExpr
            asgBitOrExpr asgBitXorExpr)
           (rec (convert-asgexpr-into-assignexpr expr))]

          [(functionCall arrayRef pointerRef
            divExpr modExpr LshiftExpr RshiftExpr bitAndExpr bitOrExpr bitXorExpr
            logEQExpr logNEQExpr logGEExpr logGTExpr logLEExpr logLTExpr
            logAndExpr logOrExpr
            unaryMinusExpr bitNotExpr logNotExpr sizeOfExpr) #f]

          [(Var)
           (let1 varname (sxml:car-content expr)
             (cond [(member varname undefs) #f]

                   [(sxml:attr expr '__macc_info_count-region)
                    => (lambda (cr)
                         (and-let1 cr (rec-multi cr)
                           (sxml:change-attr expr `(__macc_info_count-region, cr))))]

                   [else expr]
                   ))]

          [else
           (and-let1 rc (rec-multi (sxml:content expr))
             (sxml:change-content expr rc))]
          ))))

(define (affine? expr)
  (let* ([muls ((node-all (ntype?? 'mulExpr)) expr)]
         [find-loop-counter
          (lambda (e)
            (find
             (cut sxml:attr <> '__macc_info_count-region)
             ((node-all (ntype?? 'Var)) e)))])
    (every
     (lambda (m)
       (match-let1 (t0 t1) (sxml:content m)
         (not (and (find-loop-counter t0) (find-loop-counter t1)))))
     muls)))

(define (gather-undefs-multi ss)
  (append-map gather-undefs ss))

(define (gather-undefs state)
  (if (not (sxml:element? state)) '()
      (let1 c (sxml:content state)
        (case (sxml:name state)
          [(forStatement)
           (let* ([init ((ccc-sxpath "init")      state)]
                  [cond ((ccc-sxpath "condition") state)]
                  [iter ((ccc-sxpath "iter")      state)]
                  [body ((ccc-sxpath "body")      state)]

                  [top-undefs  (gather-undefs-multi (list init cond iter))]
                  [body-undefs (gather-undefs body)]
                  [loop-vars (map car (extract-loop-counters state))])

             (append
              (lset-difference string=? top-undefs loop-vars)
              body-undefs))]

          [(varAddr) c]

          [(assignExpr
            asgPlusExpr asgMinusExpr asgMulExpr asgDivExpr
            asgModExpr asgLshiftExpr asgRshiftExpr asgBitAndExpr
            asgBitOrExpr asgBitXorExpr
            postIncrExpr preIncrExpr postDecrExpr preDecrExpr)
           (let1 var (~ c 0)
             (append
              (gather-undefs var)
              (filter string? (sxml:content var))))]

          [else (gather-undefs-multi c)]
          ))))

(define (extract-indexing state)
  (case (sxml:name state)
    [(arrayRef)
     (extract-arrayref-indexing   state)]

    [(pointerRef)
     (extract-pointerref-indexing state)]
    ))

(define (extract-arrayref-indexing state)
  (let1 c (sxml:content state)
    (values (~ c 0) (~ c 1))
    ))

(define (extract-pointerref-indexing state-pointerref)
  (or
   (and-let* ([head (sxml:car-content state-pointerref)]
              [(eq? (sxml:name head) 'plusExpr)]
              [plusexpr-content (sxml:content head)]
              [(eq? (sxml:name (~ plusexpr-content 0)) 'Var)])
     (values
      (~ plusexpr-content 0)
      (~ plusexpr-content 1)))

   (values #f #f)))

(define (convert-asgexpr-into-assignexpr asgexpr)
  (match-let1 (var val) (sxml:content asgexpr)
    (let1 exp (case (sxml:name asgexpr)
                [(asgPlusExpr)   'plusExpr]
                [(asgMinusExpr)  'minusExpr]
                [(asgMulExpr)    'mulExpr]
                [(asgDivExpr)    'divExpr]
                [(asgModExpr)    'modExpr]
                [(asgLshiftExpr) 'LshiftExpr]
                [(asgRshiftExpr) 'RshiftExpr]
                [(asgBitAndExpr) 'bitAndExpr]
                [(asgBitOrExpr)  'bitOrExpr]
                [(asgBitXorExpr) 'bitXorExpr])
      (gen-=-expr var (list exp var val))
      )))

(define (gather-indexes-multi ss env)
  (let loop ([ss ss] [indexes-list '()] [env env])
    (if (null? ss)
        (values (apply append (reverse indexes-list)) env)
        (let ([head (car ss)] [rest (cdr ss)])
          (let-values ([(indexes env) (gather-indexes head env)])
            (loop rest (cons indexes indexes-list) env)))
        )))

(define (gather-indexes state env)
  (define (compound-env env state-comp)
    (let1 decls ((sxpath "declarations/varDecl") state-comp)
      (fold
       (lambda (d env)
         (or (and-let* ([name ((ccc-sxpath "name")     d)]
                        [v    ((if-ccc-sxpath "value") d)])
               (acons name (simplify-expr env v) env))
             env))
       env decls)))

  (define (simplify-expr env expr)
    (if (eq? (sxml:name expr) 'Var)
        (or (assoc-ref env (sxml:car-content expr)) expr)
        (map (lambda (ch) (if (sxml:element? ch) (simplify-expr env ch) ch))
             expr)))

  (define (gather-indexes-for state-for env)
    (let* ([body ((content-car-sxpath "body") state-for)]
           [loop-counters (extract-loop-counters state-for)]
           [loop-env
            (map
             (match-lambda1 (var start until step op)
               (cons var `(Var (@ (__macc_info_count-region
                                   ,(list
                                     (simplify-expr env start)
                                     (simplify-expr env until)
                                     step
                                     op)))
                               ,var)))
             loop-counters)])

      (gather-indexes-multi body (append loop-env env))
      ))

  (case (sxml:name state)
    [(ACCPragma)
     (gather-indexes (~ (sxml:content state) 2) env)]

    [(compoundStatement)
     (gather-indexes-multi
      ((content-car-sxpath "body") state)
      (compound-env env state))]

    [(forStatement)
     (gather-indexes-for state env)]

    [(doStatement whileStatment)
     (gather-indexes-multi
      (append
       ((content-car-sxpath "condition") state)
       ((content-car-sxpath "body")      state))
      env)]

    [(switchStatement)
     (gather-indexes-multi
      (append
       ((content-car-sxpath "value") state)
       ((content-car-sxpath "body")  state))
      env)]
    
    [(ifStatement)
     (gather-indexes-multi (map cadr (sxml:content state)) env)]

    [(exprStatement castExpr)
     (gather-indexes (sxml:car-content state) env)]

    [(functionCall)
     (gather-indexes-multi ((content-car-sxpath "arguments") state) env)]

    [(condExpr)
     (gather-indexes-multi (sxml:content state) env)]

    [(assignExpr)
     (match-let1 (lv rv) (sxml:content state)
       (let-values ([(indexes env) (gather-indexes rv env)])
         (case (sxml:name lv)
           [(Var)
            (values indexes (acons (sxml:car-content lv) (simplify-expr env rv) env))]

           [(arrayRef pointerRef)
            (let-values ([(var idx) (extract-indexing lv)])
              (values
               (if var
                   (cons (list 'DEF (sxml:car-content var) (simplify-expr env idx)) indexes)
                   indexes)
               env))]
           )))]

    [(asgPlusExpr asgMinusExpr asgMulExpr asgDivExpr
      asgModExpr asgLshiftExpr asgRshiftExpr asgBitAndExpr
      asgBitOrExpr asgBitXorExpr)
     (gather-indexes (convert-asgexpr-into-assignexpr state) env)]

    [(postIncrExpr postDecrExpr preIncrExpr preDecrExpr)
     (let ([var (sxml:car-content state)]
           [val (case (sxml:name state)
                  [(postIncrExpr preIncrExpr) (gen-int-expr 1)]
                  [(postDecrExpr preDecrExpr) (gen-int-expr -1)])])
       (gather-indexes
        (gen-=-expr var `(plusExpr ,var ,val))
        env))]

    [(arrayRef pointerRef)
     (let-values ([(var idx) (extract-indexing state)])
       (values
        (if var `((USE ,(sxml:car-content var) ,(simplify-expr env idx))) '())
        env))]

    [(plusExpr minusExpr mulExpr divExpr
      modExpr LshiftExpr RshiftExpr bitAndExpr bitOrExpr bitXorExpr
      logEQExpr logNEQExpr logGEExpr logGTExpr logLEExpr logLTExpr
      logAndExpr logOrExpr
      unaryMinusExpr bitNotExpr logNotExpr sizeOfExpr)
     (gather-indexes-multi (sxml:content state) env)]

    [(Var caseLabel defaultLabel breakStatement
      intConstant longlongConstant floatConstant
      stringConstant moeConstant funcAddr)
     (values '() env)]

    [else (error #"Unknown statement: ~(sxml:name state)")]
    ))
