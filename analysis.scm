(define-module analysis
  (use util)
  (use xm)

  (use srfi-1)
  (use srfi-11)
  (use util.match)
  (use sxml.tools)
  (use sxml.sxpath)
  (use gauche.collection)
  (use util.combinations)

  (export
   extract-indexes-collections
   ))
(select-module analysis)

;;
;; Extract indexes in the form of alist of array and indexes for each USE and DEF.
;;
(define (extract-indexes-collections state)
  (let1 state-ssa (convert-into-ssa state '())
    (construct-indexes-collections (iterate-gather-indexes state-ssa))
    ))

(define (construct-indexes-collections all-indexes)
  (map
   (lambda (indexes) ; indexes of a var
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

   (group-collection all-indexes :key cadr :test string=?)))


;;;
;;; Convert state into ssa form
;;;
;;
;; env := '(( varname . current-number )) ...)
;;
(define (convert-into-ssa state env)
  (if (not (sxml:element? state))
      (values state env)

      (case (sxml:name state)
        [(ACCPragma)
         (convert-into-ssa (~ (sxml:content state) 2) env)]

        [(ifStatement)
         (let* ([content     (sxml:content state)]
                [else-exists (= (length (sxml:content state)) 3)])
           ;;      if (#C#) { #T# } else { #E# }
           ;; -> { if (#C#) { #T# } else { <save> ...; #E# } <phi> ...; }
           (let*-values ([(new-cond env)      (convert-into-ssa (~ content 0) env)]
                         [(new-then then-env) (convert-into-ssa (~ content 1) env)]
                         [(saves    save-env) (ssa-save-env env then-env)]
                         [(new-else else-env) (if else-exists
                                                  (convert-into-ssa (~ content 2) save-env)
                                                  (values '() env))]
                         [(phis     env)      (ssa-join-env then-env else-env)])
             (values
              `(compoundStatement
                (symbols)
                (declarations)
                (body
                 ,(if else-exists
                      `(ifStatement
                        ,new-cond
                        ,new-then
                        (else
                         (compoundStatement
                          (symbols)
                          (declarations)
                          (body
                           ,@(gen-comma-states saves)
                           ,@(sxml:content new-else)))))

                      `(ifStatement
                        ,new-cond
                        ,new-then))

                 ,@(gen-comma-states phis)))

              env)))]

        [(forStatement)
         ;;     for { #S# }
         ;;-> { for { <phi> ...; #S# } <phi> ...; }
         (let ([init ((car-sxpath "init")      state)]
               [cond ((car-sxpath "condition") state)]
               [iter ((car-sxpath "iter")      state)]
               [body ((car-sxpath "body")      state)])

           (if (pair? (extract-loop-counters state))
               ;; body only
               (let*-values ([(_ r1-env) (convert-into-ssa body env)]
                             [(fore-phis fore-env)
                              (ssa-loop-top-env env r1-env)]
                             [(new-body r2-env) (convert-into-ssa body fore-env)]
                             [(rear-phis rear-env)
                              (ssa-join-env r2-env env)])
                 (values
                  `(compoundStatement
                    (symbols)
                    (declarations)
                    (body
                     (forStatement
                      ,init
                      ,cond
                      ,iter
                      (body
                       (compoundStatement
                        (symbols)
                        (declarations)
                        (body
                         ,@(gen-comma-states fore-phis)
                         ,@(sxml:content new-body)))))

                     ,@(gen-comma-states rear-phis)))

                  rear-env))

               ;; convert into whileStatement
               (convert-into-ssa
                `(compoundStatement
                  (symbols)
                  (declarations)
                  (body
                   ,@(gen-comma-states (sxml:content init))

                   (whileStatement
                    ,cond

                    (body
                     ,@(sxml:content body)
                     ,@(gen-comma-states (sxml:content iter))))
                   ))

                env)
               ))]

        [(whileStatement)
         (let ([cond ((car-sxpath "condition") state)]
               [body ((car-sxpath "body")      state)])

           (let*-values ([(_ cond1-env) (convert-into-ssa cond env)]
                         [(_ body1-env) (convert-into-ssa body cond1-env)]
                         [(fore-phis fore-env)
                          (ssa-loop-top-env env body1-env)]
                         [(new-cond cond2-env) (convert-into-ssa cond fore-env)]
                         [(new-body body2-env) (convert-into-ssa body cond2-env)]
                         [(rear-phis rear-env)
                          (ssa-join-env body2-env env)])
             (values
              `(compoundStatement
                (symbols)
                (declarations)
                (body
                 (whileStatement
                  (condition (commaExpr ,@fore-phis ,@(sxml:content new-cond)))
                  ,new-body)
                 ,@(gen-comma-states rear-phis)))

              rear-env)))]

        [(doStatement)
         ;; convert into whileStatement
         (let ([body ((car-sxpath "body")      state)]
               [cond ((car-sxpath "condition") state)])
           (convert-into-ssa
            `(compoundStatement
              (symbols)
              (declarations)
              (body
               ,@(sxml:content body)

               (whileStatement
                ,cond
                ,body)))

            env))]

        [(condExpr)
         (let*-values ([(content)         (sxml:content state)]
                       [(new-c0 env)      (convert-into-ssa (~ content 0) env)]
                       [(new-c1 c1-env)   (convert-into-ssa (~ content 1) env)]
                       [(saves  save-env) (ssa-save-env env c1-env)]
                       [(new-c2 c2-env)   (convert-into-ssa (~ content 2) save-env)]
                       [(phis   env)      (ssa-join-env c1-env c2-env)])
           (values
            `(commaExpr0
              (condExpr
               ,new-c0
               ,new-c1
               (commaExpr ,@saves ,new-c2))
              ,@phis)
            env))]

        [(assignExpr)
         (match-let1 (lv rv) (sxml:content state)
           (let-values ([(new-rv env) (convert-into-ssa rv env)])
             (if (eq? (sxml:name lv) 'Var)
                 (let1 env (ssa-env-add lv env)
                   (values
                    (sxml:change-content
                     state
                     (list
                      (ssa-change-var lv env)
                      new-rv))
                    env))

                 (let-values ([(new-lv env) (convert-into-ssa lv env)])
                   (values
                    (sxml:change-content
                     state
                     (list new-lv new-rv))
                    env))
                 )))]

        [(postIncrExpr postDecrExpr preIncrExpr preDecrExpr)
         (let ([var (sxml:car-content state)]
               [val (case (sxml:name state)
                      [(postIncrExpr preIncrExpr) (gen-int-expr 1)]
                      [(postDecrExpr preDecrExpr) (gen-int-expr -1)])])
           (convert-into-ssa (gen-=-expr var `(plusExpr ,var ,val)) env))]

        [(asgPlusExpr asgMinusExpr asgMulExpr asgDivExpr
          asgModExpr asgLshiftExpr asgRshiftExpr asgBitAndExpr
          asgBitOrExpr asgBitXorExpr)
         (match-let1 (var val) (sxml:content state)
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
             (convert-into-ssa (gen-=-expr var (list exp var val)) env)))]

        [(Var) (values (ssa-change-var state env) env)]

        [(compoundStatement)
         (let-values ([(ret-content new-env)
                       (convert-into-ssa-multi (sxml:content state) env)]
                      [(local-varnames)
                       ((sxpath '(declarations varDecl name *text*)) state)])
           ;; env except for local variables
           (values (sxml:change-content state ret-content)
                   (remove (lambda (x)
                             (member (sxml:car-content (car x)) local-varnames))
                           new-env)
                   ))]

        [else
         (let-values ([(ret-content new-env)
                       (convert-into-ssa-multi (sxml:content state) env)])
           (values (sxml:change-content state ret-content)
                   new-env))]
        )))

(define (gen-comma-states exprs)
  (if (null? exprs) '()
      `((exprStatement (commaExpr ,@exprs)))))

(define (ssa-diff-env env1 env2)
  (delete-duplicates
   (filter
    (lambda (x)
      (let1 v (car x)
        (not (= (assoc-ref env1 v -1) (assoc-ref env2 v -1)))))
    (append env1 env2))
   (lambda (x y) (equal? (car x) (car y)))
   ))

(define (ssa-loop-top-env orig chng)
  (let1 diffs (ssa-diff-env orig chng)
    (let loop ([phis '()] [env orig] [diffs diffs])
      (if (null? diffs)
          (values phis env)

          (let* ([v       (caar diffs)]
                 [orig-n  (assoc-ref orig v)]
                 [chng-n  (assoc-ref chng v)]
                 [orig-v  (if orig-n (ssa-new-var v orig-n) v)]
                 [last-v  (ssa-new-var v (+ chng-n 1))]
                 [new-n   (+ (or orig-n -1) 1)]
                 [new-v   (ssa-new-var v new-n)])

            (loop
             (cons `(phi ,new-v ,orig-v ,last-v) phis)
             (acons v new-n env)
             (cdr diffs))
            )))))

(define (ssa-update-env u env1 env2)
  (let1 diffs (ssa-diff-env env1 env2)
    (let loop ([ret '()] [env env1] [diffs diffs])
      (if (null? diffs)
          (values ret env)

          (let* ([v  (caar diffs)]
                 [n1 (assoc-ref env1 v)]
                 [n2 (assoc-ref env2 v)]
                 [v1 (if n1 (ssa-new-var v n1) v)]
                 [v2 (if n2 (ssa-new-var v n2) v)]
                 [new-n (+ (max (or n1 0) (or n2 0)) 1)]
                 [new-v (ssa-new-var v new-n)])

            (loop
             (cons (u new-v v1 v2) ret)
             (acons v new-n env)
             (cdr diffs))
            )))))

(define (ssa-save-env original-env current-env)
  (ssa-update-env
   (lambda (new-v orignal-v _)
     `(assignExpr ,new-v ,orignal-v))
   original-env
   current-env))

(define (ssa-join-env env1 env2)
  (ssa-update-env
   (lambda (new-v v1 v2)
     `(phi ,new-v ,v1 ,v2))
   env1 env2))

(define (ssa-env-add var env)
  (let1 num (assoc-ref env var -1)
    (acons var (+ num 1) env)))

(define (ssa-new-var var num)
  `(Var ,(ssa-rename-varname (sxml:car-content var) num)))

(define (ssa-rename-varname varname num)
  #"~|varname|__ssa__~|num|")

(define (ssa-change-var var env)
  (if-let1 num (assoc-ref env var)
     `(Var (@ ,@(sxml:attr-list var))
           ,(ssa-rename-varname (sxml:car-content var) num))
     var))

(define (convert-into-ssa-multi states env)
  (let loop ([orig-states states] [ret-states '()] [env env])
    (if (null? orig-states)
        (values (reverse ret-states) env)
        (let-values ([(s env) (convert-into-ssa (car orig-states) env)])
          (loop (cdr orig-states) (cons s ret-states) env))
        )))


;;;
;;; Gather indexes from SSA state by iterative data-flow analysis
;;;
(define (iterate-gather-indexes state)
  (let loop ([old-indexes '()] [old-env '()])
    (let-values ([(new-indexes new-env) (gather-indexes state old-env)])
      (let1 new-indexes
          (sort (delete-duplicates (map normalize-index new-indexes)))
        (if (equal? new-indexes old-indexes) new-indexes
            (loop new-indexes new-env))))))

(define (normalize-index index)
  (match-let1 (label varname expr) index
    (list label varname (and (affine? expr) expr))))

(define (affine? expr)
  (let* ([muls ((node-all (ntype?? 'mulExpr)) expr)]
         [find-loop-counter
          (lambda (e)
            (find
             (cut sxml:attr <> '__macc_info_count-region)
             ((node-all (ntype?? 'Var)) e)))])
    (and
     (every
      (lambda (m)
        (match-let1 (t0 t1) (sxml:content m)
         (not (and (find-loop-counter t0) (find-loop-counter t1)))))
      muls)

     (null? ((node-all
              (ntype-names?? 
               '(functionCall arrayRef pointerRef
                 divExpr modExpr LshiftExpr RshiftExpr
                 bitAndExpr bitOrExpr bitXorExpr
                 logEQExpr logNEQExpr logGEExpr
                 logGTExpr logLEExpr logLTExpr
                 logAndExpr logOrExpr unaryMinusExpr
                 bitNotExpr logNotExpr sizeOfExpr)))
             expr))
     )))

;; env := '(( varname . ( val ... ) ) ... )
(define (gather-indexes state env)
  (define (compound-env state-comp env)
    (let1 decls ((sxpath "declarations/varDecl") state-comp)
      (fold
       (lambda (d env)
         (or (and-let* ([name  ((ccc-sxpath "name")     d)]
                        [value ((if-ccc-sxpath "value") d)])
               (gi-update-env name (simplify-expr value env) env))
             env))
       env decls)))

  (define (gather-indexes-for state-for env)
    (let* ([body-contents ((content-car-sxpath "body") state-for)]
           [loop-counters (extract-loop-counters state-for)])
      (gather-indexes-multi
       body-contents
       (fold
        (lambda (lc env)
          (match-let1 (varname start until step op) lc
            (gi-update-env
             varname
             `((Var (@ (__macc_info_count-region
                        ,(list
                          (car (simplify-expr start env))
                          (car (simplify-expr until env))
                          step
                          op)))
                    ,varname))
             env)))
        env loop-counters))))

  (case (sxml:name state)
    [(ACCPragma)
     (gather-indexes (~ (sxml:content state) 2) env)]

    [(compoundStatement)
     (gather-indexes-multi
      ((content-car-sxpath "body") state)
      (compound-env state env))]

    [(forStatement)
     (gather-indexes-for state env)]

    [(doStatement whileStatement)
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
            (values indexes
                    (gi-update-env
                     (sxml:car-content lv)
                     (simplify-expr rv env)
                     env))]

           [(arrayRef pointerRef)
            (let-values ([(var idx) (extract-indexing lv)])
              (values
               (append
                (if-let1 varname (and var (sxml:car-content var))
                   (let1 vals (or (simplify-expr idx env) '(#f))
                     (map (lambda (v) `(DEF ,varname ,v)) vals))
                   '())
                indexes)
               env))]
           )))]

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
        (if-let1 varname (and var (sxml:car-content var))
           (let1 vals (or (simplify-expr idx env) '(#f))
             (map (lambda (v) `(USE ,varname ,v)) vals)))
        env))]

    [(plusExpr minusExpr mulExpr divExpr
      modExpr LshiftExpr RshiftExpr bitAndExpr bitOrExpr bitXorExpr
      logEQExpr logNEQExpr logGEExpr logGTExpr logLEExpr logLTExpr
      logAndExpr logOrExpr
      unaryMinusExpr bitNotExpr logNotExpr sizeOfExpr
      commaExpr commaExpr0)
     (gather-indexes-multi (sxml:content state) env)]

    [(Var caseLabel defaultLabel breakStatement
      intConstant longlongConstant floatConstant
      stringConstant moeConstant funcAddr)
     (values '() env)]

    [(phi)
     (match-let1 (new-v v1 v2) (sxml:content state)
       (values '() (gi-update-env-phi new-v v1 v2 env)))]

    [else (error #"Unknown statement: ~(sxml:name state)")]
    ))

(define (gather-indexes-multi ss env)
  (let loop ([ss ss] [indexes-list '()] [env env])
    (if (null? ss)
        (values (apply append (reverse indexes-list)) env)
        (let ([head (car ss)] [rest (cdr ss)])
          (let-values ([(indexes env) (gather-indexes head env)])
            (loop rest (cons indexes indexes-list) env)))
        )))

(define (gi-update-env varname vals env)
  (let1 old-vals (assoc-ref env varname '()) ; #f means divergence
    (if old-vals
        (acons varname
               (and vals
                    (not (any (cut divergence-relation? varname <>) vals))
                    (gi-remove-self-references
                     varname
                     (delete-duplicates (append vals old-vals))))
               (alist-delete varname env))
        env)))

(define (gi-remove-self-references varname vals)
  (let1 new-vals
      (filter (lambda (v)
                (not (and (eq? (sxml:name v) 'Var)
                          (equal? (sxml:car-content v) varname))))
              vals)
    (if (null? new-vals) vals
        new-vals)))

(define (divergence-relation? varname value)
  (and (not (eq? (sxml:name value) 'Var))
       (any
        (lambda (v)
          (and (not (sxml:attr v '__macc_info_count-region))
               (equal? varname (sxml:car-content v))))
        ((node-all (ntype?? 'Var)) value))
       ))

(define (gi-update-env-phi new-v v1 v2 env)
  (gi-update-env
   (sxml:car-content new-v)
   (and-let* ([vals1 (assoc-ref env (sxml:car-content v1) `(,v1))]
              [vals2 (assoc-ref env (sxml:car-content v2) `(,v2))])
     (append vals1 vals2))
   env))

(define (extract-indexing expr)
  (case (sxml:name expr)
    [(arrayRef)
     (extract-arrayref-indexing   expr)]

    [(pointerRef)
     (extract-pointerref-indexing expr)]
    ))

(define (extract-arrayref-indexing expr-arrayref)
  (let1 c (sxml:content expr-arrayref)
    (values (~ c 0) (~ c 1))
    ))

(define (extract-pointerref-indexing expr-pointerref)
  (or
   (and-let* ([head (sxml:car-content expr-pointerref)]
              [(eq? (sxml:name head) 'plusExpr)]
              [plusexpr-content (sxml:content head)]
              [(eq? (sxml:name (~ plusexpr-content 0)) 'Var)])
     (values
      (~ plusexpr-content 0)
      (~ plusexpr-content 1)))

   (values #f #f)))

(define (simplify-expr expr env)
  (define (rec e)
    (simplify-expr e env))

  (define (rec-multi es)
    (let1 res (map rec es)
      (and (every values res) res)))

  (if (not (sxml:element? expr)) (list expr)
      (let1 c (sxml:content expr)
        (case (sxml:name expr)
          [(assignExpr)
           (rec (~ c 1))]

          [(postIncrExpr postDecrExpr commaExpr0)
           (rec (~ c 0))]

          [(commaExpr)
           (rec (last c))]

          [(preIncrExpr preDecrExpr)
           `(,(list
               (if (eq? (sxml:name expr) preIncrExpr) plusExpr minusExpr)
               (rec (~ c 0))
               (gen-int-expr 1)))]

          [(Var)
           (let1 varname (car c)
             (and-let1 x (assoc-ref env varname '())
               (if (pair? x) x
                   (list expr))))]

          [else
           (and-let* ([x   (rec-multi c)]
                      [rcs (cartesian-product x)])
             (map
              (lambda (rc)
                (sxml:change-content expr rc))
              rcs))]
          ))))
