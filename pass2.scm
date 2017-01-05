(define-module pass2
  (use util)
  (use xm)

  (use srfi-1)
  (use srfi-11)
  (use util.match)
  (use sxml.tools)
  (use sxml.sxpath)
  (use util.combinations)
  (use gauche.collection)

  (export
   pass2
   ))
(select-module pass2)

;;;
;;; PASS2
;;;
;;; Parallelize acc regions individually
;;;

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

(define (gen-compound . states)
  `(compoundStatement
    (symbols)
    (declarations)
    (body
     ,@states)))

(define (gen-funcall fun-name . args)
  `
  (functionCall
   (function
    (funcAddr ,fun-name))
   (arguments
    ,@args)))

(define (gen-barrier)
  '(OMPPragma (string "BARRIER") (list)))

(define (gen-par :key (clauses '()) (state #f))
  `
  (OMPPragma
   (string "PARALLEL")
   (list
    (list (string "DIR_NUM_THREADS") (Var "__MACC_NUMGPUS"))
    ,@clauses)

   ,
   (gen-compound-with-local-vars
    `(("int" "__macc_tnum" ,(gen-funcall "omp_get_thread_num")))

    `(exprStatement
      ,(gen-funcall "__macc_set_gpu_num" '(Var "__macc_tnum")))

    state
    )))

(define (generate-data-state label args enter)
  (and-let*
      ([fun-name
        (if enter
            (match label
              [(or "COPY" "COPYIN")
               "__macc_copyin"]

              [(or "COPYOUT" "CREATE")
               "__macc_create"]

              [else #f])

            (match label
              [(or "COPY" "COPYOUT")
               "__macc_copyout"]

              [(or "COPYIN" "CREATE")
               "__macc_delete"]

              [else #f]))]
       [var    (~ (sxml:content args)    0)]
       [start  (~ (~ (sxml:content args) 1) 1)]
       [length (~ (~ (sxml:content args) 1) 2)])

    `
    (exprStatement
     ,(gen-funcall
       fun-name
       '(Var "__macc_tnum")
       var
       `(sizeOfExpr (typeName (@ (type ,(sxml:attr var 'ptype)))))
       start
       length))
    ))

(define (generate-data-state-enter label args)
  (generate-data-state label args #t))

(define (generate-data-state-exit label args)
  (generate-data-state label args #f))

(define (translate-data-clauses xm state enter)
  (apply
   gen-compound

   (append-map
    (lambda (cls)
      (let ([label ((ccc-sxpath "string") cls)]
            [gen   (if enter generate-data-state-enter generate-data-state-exit)])

        (filter-map (cut gen label <>) ((cdar-sxpath "list") cls))))

    (sxml:content ((car-sxpath "list") state)))
   ))

(define (translate-data-clauses-enter xm state)
  (translate-data-clauses xm state #t))

(define (translate-data-clauses-exit xm state)
  (translate-data-clauses xm state #f))

(define (parallelize-acc-data! xm state)
  (sxml:change!
   state

   (gen-compound
    (gen-par :state (translate-data-clauses-enter xm state))

    (~ (sxml:content state) 2)

    (gen-par :state (translate-data-clauses-exit xm state))
    )))

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
          `(,varname ,use ,def)

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
     `(,label
       ,var
       ,(and-let* ([ne (normalize-expr expr undefs)]
                   [(affine? ne)])
          ne)))
   indexes))

(define (normalize-expr expr undefs)
  (define (rec e)
    (normalize-expr e undefs))

  (define (rec-several es)
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
           `(,(if (eq? (sxml:name expr) preIncrExpr) plusExpr minusExpr)
             ,(rec (~ c 0))
             (intConstant "1"))]

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
                         (and-let1 cr (rec-several cr)
                           (sxml:change-attr expr `(__macc_info_count-region, cr))))]

                   [else expr]
                   ))]

          [else
           (and-let1 rc (rec-several (sxml:content expr))
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

(define RENAME_VAR_COUNT 0)

(define (rename old)
  #"__~|old|_~(inc! RENAME_VAR_COUNT)")

;; (values new-state renaming)
(define (rename-syms state)
  (cond [(not (sxml:element? state)) state]

        [(eq? (sxml:name state) 'name)
         (let* ([old-name (sxml:car-content state)]
                [new-name (rename old-name)])
           (values
            `(name ,new-name)
            (list (cons old-name new-name))
            ))]

        [else
         (let loop ([new-content '()] [renaming '()] [cs (sxml:content state)])
           (if (null? cs)
               (values
                (sxml:change-content state (reverse new-content))
                renaming)

               (let-values ([(c r) (rename-syms (car cs))])
                 (loop
                  (cons c new-content)
                  (append r renaming)
                  (cdr cs)))))]
        ))

(define (rename-vars-compound state renaming)
  (let ([syms ((car-sxpath "symbols")      state)]
        [decs ((car-sxpath "declarations") state)]
        [body ((car-sxpath "body")         state)])

    (let*-values ([(new-syms syms-renaming) (rename-syms syms)]
                  [(renaming)               (append syms-renaming renaming)])
      (sxml:change-content
       state
       (list
        new-syms
        (rename-vars decs renaming)
        (rename-vars body renaming)))
      )))

(define (rename-vars state :optional (renaming '()))
  (if (not (sxml:element? state)) state
      (case (sxml:name state)
        [(Var varAddr name)
         (let ([name    (sxml:name state)]
               [varname (sxml:car-content state)])
           (sxml:change-content
            state `(,(or (assoc-ref renaming varname) varname))))]

        [(compoundStatement)
         (rename-vars-compound state renaming)]

        [else
         (sxml:change-content state (map (cut rename-vars <> renaming) (sxml:content state)))]
        )))

(define (gather-undefs-several ss)
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

                  [top-undefs  (gather-undefs-several (list init cond iter))]
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

          [else (gather-undefs-several c)]
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
      `(assignExpr ,var (,exp ,var ,val))
      )))

(define (extract-loop-counters state-for)
  (define (normalize-cond state-cond)
    ;; TODO
    ;; normalize cond like PGI compiler
    ;; for more flexibilty
    state-cond
    )

  ;; '((var . op until) ...)
  (define (extract-cond-vars state-cond)
    ;; var (<=|<) expr
    (case (sxml:name state-cond)
      [(logLEExpr logLTExpr)
       (let1 c (sxml:content state-cond)
         (and (eq? (sxml:name (~ c 0)) 'Var)

              (list
               (list
                (sxml:car-content (~ c 0))
                (case (sxml:name state-cond)
                  [(logLEExpr) '<=]
                  [(logLTExpr) '<])
                (~ c 1)))
              ))]

      [else '()]
      ))

  ;; '((var . step) ...)
  (define (extract-iter-vars state-iter)
    ;; i(++|--) | (++|--)i | i (+|-)= n
    ;; TODO
    ;; more flexibilty

    (define (inverse-sign constant)
      (list
       (sxml:name constant)
       (number->string (- (string->number (sxml:car-content constant))))))

    (let1 c (sxml:content state-iter)
      (case (sxml:name state-iter)
        [(postIncrExpr preIncrExpr postDecrExpr preDecrExpr)
         (match-let1 (var) c
           (or
            (and (eq? (sxml:name var) 'Var)

                 (list
                  (cons
                   (sxml:car-content var)
                   (case (sxml:name state-iter)
                     [(postIncrExpr preIncrExpr) '(intConstant "1")]
                     [(postDecrExpr preDecrExpr) '(intConstant "-1")])
                   )))
            '()
            ))]

        [(asgPlusExpr asgMinusExpr)
         (match-let1 (var step) c
           (or
            (and (eq? (sxml:name var)  'Var)
                 (eq? (sxml:name step) 'intConstant)

                 (list
                  (list
                   (sxml:car-content var)
                   (case (sxml:name state-iter)
                     [(asgPlusExpr)  step]
                     [(asgMinusExpr) (inverse-sign step)])
                   )))
            '()
            ))]

        [else '()]
        )))

  ;; '((var start) ...)
  (define (extract-init-vars state-init)
    ;; i = ...
    (let1 c (sxml:content state-init)
      (case (sxml:name state-init)
        [(assignExpr)
         (match-let1 (var start) c
           (or
            (and (eq? (sxml:name var)  'Var)

                 (list
                  (cons
                   (sxml:car-content var)
                   start)))
            '()))]
        )))

  (let* ([init ((ccc-sxpath "init")      state-for)]
         [cond ((ccc-sxpath "condition") state-for)]
         [cond (normalize-cond           cond)]
         [iter ((ccc-sxpath "iter")      state-for)]

         [init-vars (extract-init-vars init)]
         [cond-vars (extract-cond-vars cond)]
         [iter-vars (extract-iter-vars iter)])

    (filter-map

     (^[ini]
       (and-let* ([var   (car ini)]
                  [start (cdr ini)]

                  [c     (assoc-ref cond-vars var)]
                  [op    (~ c 0)]
                  [until (~ c 1)]

                  [step (assoc-ref iter-vars var)])

         (let* ([int? (lambda (e) (eq? (sxml:name e) 'intConstant))]
                [reducible (and (int? start) (int? until) (int? step))]

                [until (if (not reducible) until
                           (let* ([nc (.$ string->number sxml:car-content)]
                                  [start-n (nc start)]
                                  [until-n (nc until)]
                                  [step-n  (nc step)]
                                  [until-equal (eq? op '<=)]
                                  [width (- until-n start-n (if until-equal -1 0))]
                                  [new-until-n (+ (* (div width step-n) step-n) start-n)])

                             `(intConstant
                               ,(number->string
                                 (if (and (not until-equal) (= until-n new-until-n))
                                     (- new-until-n step-n)
                                     new-until-n)))
                             ))]
                [op (if reducible '<= op)])

           (list var start until step op)
           )))

     init-vars)
    ))

(define (gather-indexes-several ss env)
  (let loop ([ss ss] [indexes-list '()] [env env])
    (if (null? ss)
        (values (apply append (reverse indexes-list)) env)
        (let ([head (car ss)] [rest (cdr ss)])
          (let-values ([(indexes env) (gather-indexes head env)])
            (loop rest (cons indexes indexes-list) env)))
        )))

(define (gather-indexes state env)
  (define (compound-env env state-comp)
    (let ([decls ((sxpath "declarations/varDecl") state-comp)])
      (append
       (filter-map
        (lambda (d)
          (and-let* ([name ((ccc-sxpath "name")  d)]
                     [v    ((if-ccc-sxpath "value") d)])
            (cons name (simplify-expr env v))))
        decls)
       env)))

  (define (simplify-expr env expr)
    (if (eq? (sxml:name expr) 'Var)
        (or (assoc-ref env (sxml:car-content expr)) expr)
        (map
         (^[ch]
           (if (sxml:element? ch)
               (simplify-expr env ch)
               ch))
         expr)))

  (define (gather-indexes-for state-for env)
    (let* ([body ((content-car-sxpath "body") state-for)]
           [loop-counters (extract-loop-counters state-for)]
           [loop-env
            (map
             (match-lambda1 (var start until step op)
               (cons
                var
                `(Var
                  (@ (__macc_info_count-region
                      (
                       ,(simplify-expr env start)
                       ,(simplify-expr env until)
                       ,step
                       ,op
                       )
                      ))
                  ,var)))
             loop-counters)])

      (gather-indexes-several body (append loop-env env))
      ))

  (case (sxml:name state)
    [(ACCPragma)
     (gather-indexes (~ (sxml:content state) 2) env)]

    [(compoundStatement)
     (gather-indexes-several
      ((content-car-sxpath "body") state)
      (compound-env env state))]

    [(forStatement)
     (gather-indexes-for state env)]

    [(doStatement whileStatment)
     (gather-indexes-several
      (append
       ((content-car-sxpath "condition") state)
       ((content-car-sxpath "body")      state))
      env)]

    [(switchStatement)
     (gather-indexes-several
      (append
       ((content-car-sxpath "value") state)
       ((content-car-sxpath "body")  state))
      env)]
    
    [(ifStatement)
     (gather-indexes-several (map cadr (sxml:content state)) env)]

    [(exprStatement)
     (gather-indexes (sxml:car-content state) env)]

    [(functionCall)
     (gather-indexes-several ((content-car-sxpath "arguments") state) env)]

    [(assignExpr)
     (match-let1 (lv rv) (sxml:content state)
       (let-values ([(indexes env) (gather-indexes rv env)])
         (case (sxml:name lv)
           [(Var)
            (values indexes (acons (sxml:car-content lv) lv env))]

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
                  [(postIncrExpr preIncrExpr) '(intConstant "1")]
                  [(postDecrExpr preDecrExpr) '(intConstant "-1")])])
       (gather-indexes
        `(assignExpr ,var (plusExpr ,var ,val))
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
     (gather-indexes-several (sxml:content state) env)]

    [(Var caseLabel defaultLabel
      intConstant longlongConstant floatConstant
      stringConstant moeConstant funcAddr)
     (values '() env)]

    [else (error #"Unknown statement: ~(sxml:name state)")]
    ))

(define NEW_TYPE_COUNT 0)

(define (new-array-type)
  #"macc__A~(inc! NEW_TYPE_COUNT)")

(define-constant MAX_GPU_NUM "10")

(define (add-setting-array! xm name)
  (let1 atype (new-array-type)
    (sxml:content-push!
     (xm-type-table xm)
     `(arrayType (@ (type ,atype) (element_type "int") (array_size ,MAX_GPU_NUM))))

    (sxml:content-push!
     (xm-global-symbols xm)
     `(id (@ (type ,atype) (sclass "extern_def")) (name ,name)))

    (sxml:content-push!
     (xm-global-declarations xm)
     `(varDecl (name ,name)))
    ))

(define (new-global-var! xm name type :optional (value '(intConstant "-1")))
  (sxml:content-push!
   (xm-global-symbols xm)
   `(id (@ (type ,type) (sclass "extern_def")) (name ,name)))

  (sxml:content-push!
   (xm-global-declarations xm)
   `(varDecl
     (name ,name)
     (value ,value)
     ))
  )

(define NEW_NAME_COUNT 0)

(define (new-name name)
  #"__macc__~|name|_~(inc! NEW_NAME_COUNT)")

;; extract vars without loop-counters
(define (extract-dynamic-vars expr)
  (remove
   (cut sxml:attr <> '__macc_info_count-region)
   ((node-all (ntype?? 'Var)) expr)))

;; (values (use-lb-set-name use-ub-set-name def-lb-set-name def-ub-set-name) state)
(define (generate-access-region-calcs xm indexes-col macc-gpu-num-var top-loop-counter-varname)
  (define (extend-loop-counter expr)
    (cond [(not (sxml:element? expr))
           (list expr)]

          [(and (eq? (sxml:name expr) 'Var) (sxml:attr expr '__macc_info_count-region))
           => (lambda (cr)
                (if (eq? top-loop-counter-varname (sxml:car-content expr))
                    '((Var "__macc_top_loop_lb")
                      (Var "__macc_top_loop_ub"))

                    (append-map extend-loop-counter `(,(~ cr 0) ,(~ cr 1)))
                    ))]

          [else
           (map
            (cut sxml:change-content expr <>)
            (cartesian-product (map extend-loop-counter (sxml:content expr))))]
          ))

  (let* ([col-varname (~ indexes-col 0)]
         [use-indexes (~ indexes-col 1)]
         [def-indexes (~ indexes-col 2)]

         [use-lb-set-name (new-name #"~|col-varname|_use_lb_set")]
         [use-ub-set-name (new-name #"~|col-varname|_use_ub_set")]
         [use-lb-set-var `(Var ,use-lb-set-name)]
         [use-ub-set-var `(Var ,use-ub-set-name)]

         [def-lb-set-name (new-name #"~|col-varname|_def_lb_set")]
         [def-ub-set-name (new-name #"~|col-varname|_def_ub_set")]
         [def-lb-set-var `(Var ,def-lb-set-name)]
         [def-ub-set-var `(Var ,def-ub-set-name)])

    (add-setting-array! xm use-lb-set-name)
    (add-setting-array! xm use-ub-set-name)

    (add-setting-array! xm def-lb-set-name)
    (add-setting-array! xm def-ub-set-name)

    (values
     (list use-lb-set-name use-ub-set-name def-lb-set-name def-ub-set-name)

     (gen-compound
      `
      (exprStatement
       ,(gen-funcall "__macc_init_access_region" macc-gpu-num-var use-lb-set-var use-ub-set-var))
      `
      (exprStatement
       ,(gen-funcall "__macc_init_access_region" macc-gpu-num-var def-lb-set-var def-ub-set-var))

      (apply
       gen-compound
       (map (lambda (e) `(exprStatement
                          ,(gen-funcall "__macc_update_access_region"
                            macc-gpu-num-var use-lb-set-var use-ub-set-var e)))
            (append-map extend-loop-counter use-indexes)))
      (apply
       gen-compound
       (map (lambda (e) `(exprStatement
                          ,(gen-funcall "__macc_update_access_region"
                            macc-gpu-num-var def-lb-set-var def-ub-set-var e)))
            (append-map extend-loop-counter def-indexes)))
      ))))

;; '( (op . var) ... )
(define (collect-acc-reductions state)
  (let ([reductions
         ((sxpath
           `(// ,(sxpath:name 'ACCPragma)
                list (list (string *text* ,(make-sxpath-query #/^REDUCTION_/)))))
          state)])
    (append-map
     (lambda (r)
       (let ([op   ((car-sxpath '(string *text*)) r)]
             [vars ((sxpath '(list *))            r)])
         (map (cut cons op <>) vars)))
     reductions)
    ))

;; Assign loop counters as omp privates
;;
;; '( var ... )
;;
(define (extract-omp-privates state)
  (let ([loop-counters
         ((sxpath '(// forStatement init assignExpr Var *text*)) state)]
        [defined
         ((sxpath '(// compoundStatement declarations varDecl name *text*)) state)])

    (map (lambda (c) `(Var ,c)) (lset-difference string=? loop-counters defined))))

(define (parallelize-acc-parallel! xm state)
  (let* ([state-orig      state] ; for sxml:change!
         [state           (rename-vars state)]
         [indexes-cols    (extract-indexes-collections state)]
         [reductions      (collect-acc-reductions state)]
         [privates        (extract-omp-privates state)]

         [top-loop         ((car-sxpath '(// forStatement)) state)]
         [top-loop-counter (car (extract-loop-counters top-loop))]
         [top-loop-counter-varname (car top-loop-counter)]
         [top-loop-lb-set-name (new-name #"~|top-loop-counter-varname|_loop_lb_set")]
         [top-loop-ub-set-name (new-name #"~|top-loop-counter-varname|_loop_ub_set")]

         [sets '()]

         [dynamic-vars
          (delete-duplicates
           (append-map
            extract-dynamic-vars
            (append
             ;; indexes
             (append-map
              (^[c]
                (append
                 (or (~ c 1) '())
                 (or (~ c 2) '())))
              indexes-cols)
             ;; loop-counters
             (drop (take top-loop-counter 3) 1))))]
         [last-dvars
          (map
           (^[v]
             (let1 nn (new-name #"~(sxml:car-content v)_last")
               (new-global-var! xm nn (sxml:attr v 'type))
               `(Var ,nn)))
           dynamic-vars)])

    ;; Add new loop counters
    (add-setting-array! xm top-loop-lb-set-name)
    (add-setting-array! xm top-loop-ub-set-name)

    ;; Rewrite loop counters
    (let ([top-loop-init ((car-sxpath "init")      top-loop)]
          [top-loop-cond ((car-sxpath "condition") top-loop)])
      (sxml:change-content!
       top-loop-init
       `
       (
        (assignExpr
         (Var ,top-loop-counter-varname)
         (arrayRef
          (@ (type "int"))
          (arrayAddr ,top-loop-lb-set-name)
          (Var "__macc_tnum")))
        ))

      (sxml:change-content!
       top-loop-cond
       `
       (
        (logLEExpr
         (Var ,top-loop-counter-varname)
         (arrayRef
          (@ (type "int"))
          (arrayAddr ,top-loop-ub-set-name)
          (Var "__macc_tnum")))
        )))

    (sxml:change!
     state-orig

     ;; new state
     (gen-compound-with-local-vars
      `(("int" "__macc_region_is_changed" (intConstant "1") "static")
        ("int" "__macc_multi" (intConstant "1") "static")

        ("int" "__macc_gpu_num")
        ("int" "__macc_top_loop_lb")
        ("int" "__macc_top_loop_ub")
        )

      `
      (exprStatement
       (assignExpr
        (Var "__macc_region_is_changed")
       (logNotExpr
        ,(fold
          (lambda (v lastv knil) `(logAndExpr (logEQExpr ,v ,lastv) ,knil))
          '(logNotExpr (Var "__macc_region_is_changed"))
          dynamic-vars
          last-dvars))
       ))

      `
      (ifStatement
       (condition
        (Var "__macc_region_is_changed"))

       (then
        ,(gen-compound
          '
          (exprStatement (assignExpr (Var "__macc_region_is_changed") (intConstant "0")))

          (apply
           gen-compound
           (map (lambda (v lastv) `(exprStatement (assignExpr ,lastv ,v)))
                dynamic-vars
                last-dvars))

          `
          (exprStatement
           ,(gen-funcall
             "__macc_set_loop_region"
             `(Var ,top-loop-lb-set-name)
             `(Var ,top-loop-ub-set-name)
             (~ top-loop-counter 1)
             (~ top-loop-counter 2)
             (~ top-loop-counter 3)
             `(intConstant ,(if (eq? (~ top-loop-counter 4) '<=) "1" "0"))))

          `
          (forStatement
           (init
            (assignExpr (Var "__macc_gpu_num") (intConstant "0")))
           (condition
            (logLTExpr (Var "__macc_gpu_num") (Var "__MACC_NUMGPUS")))
           (iter
            (postIncrExpr (Var "__macc_gpu_num")))
           (body
            (exprStatement
             (assignExpr
              (Var "__macc_top_loop_lb")
              (arrayRef (@ (type "int")) (arrayAddr ,top-loop-lb-set-name) (Var "__macc_gpu_num"))))

            (exprStatement
             (assignExpr
              (Var "__macc_top_loop_ub")
              (arrayRef (@ (type "int")) (arrayAddr ,top-loop-ub-set-name) (Var "__macc_gpu_num"))))
            ,
            (apply
             gen-compound
             (map
              (lambda (col)
                (let-values ([(set-names state)
                              (generate-access-region-calcs
                               xm col '(Var "__macc_gpu_num") top-loop-counter-varname)])
                  (let1 region-type (lambda (col) (cond [(not col) 0] [(null? col) 1] [else 2]))
                    ;; '(var_name use_type use_lb_name use_ub_name def_type def_lb_name def_ub_name)
                    (push! sets (list (~ col 0)
                                      (region-type (~ col 1)) (~ set-names 0) (~ set-names 1)
                                      (region-type (~ col 2)) (~ set-names 2) (~ set-names 3)))
                    state
                    )))
              indexes-cols))
            )))))

      ;; TODO
      ;; if (def not affine or overlapped)
      ;; | __macc_mult = 0;
      ;; | change loop conter
      ;; | recalc only gpunum=0

      (gen-par
       :clauses
       (append
        (map
         (match-lambda1 (op . var)
           `(list (string ,(string-append "DATA_" op)) (list ,var)))
         reductions)

        (if (null? privates) '()
            `((list (string "DATA_PRIVATE") (list ,@privates)))))

       :state
       (gen-compound

        (apply
         gen-compound
         (map
          (^[set]
            `(exprStatement
              ,
              (gen-funcall "__macc_set_data_region"
               '(Var "__macc_tnum")
               `(Var ,(~ set 0))
               `(Var "__macc_multi")
               `(intConstant ,(number->string (~ set 1)))
               `(Var ,(~ set 2))
               `(Var ,(~ set 3))
               `(intConstant ,(number->string (~ set 4)))
               `(Var ,(~ set 5))
               `(Var ,(~ set 6))))
            )
          sets))

        (gen-barrier)

        state)))
     )))

(define (parallelize-acc! xm state)
  (match ((ccc-sxpath "string") state)
    ["DATA"
     (parallelize-acc-data! xm state)]

    ["PARALLEL"
     (parallelize-acc-parallel! xm state)]

    [else #f]
    ))

(define (add-macc-init! xm)
  (let1 main-body
      ((if-car-sxpath
        '(// (functionDefinition (name (equal? "main"))) body))
       (xm-global-declarations xm))

    (unless main-body
      (error "Can't locate the definition of main."))

    (sxml:change-content!
     main-body
     `(,(apply
         gen-compound
         `(exprStatement ,(gen-funcall "__macc_init"))
         (cdr main-body))))
    ))

(define (pass2 xm)
  (rlet1 xm (xm-copy xm)
    (add-macc-init! xm)

    (for-each
     (cut parallelize-acc! xm <>)
     ((sxpath '(// ACCPragma)) (xm-global-declarations xm)))
    ))
