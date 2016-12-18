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
               "__macc_delete"]

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

(define (generate-enter-data-state label args)
  (generate-data-state label args #t))

(define (generate-exit-data-state label args)
  (generate-data-state label args #f))

(define (extract-data-clauses xm state enter)
  (let ([data-states
         (append-map
          (^[x]
            (let ([label ((ccc-sxpath "string") x)]
                  [gen   (if enter
                             generate-enter-data-state
                             generate-exit-data-state)])
              (filter-map
               (cut gen label <>)
               ((cdar-sxpath "list") x))))
          (sxml:content ((car-sxpath "list") state)))])
  `
  (compoundStatement
   (symbols)
   (declarations)
   (body
    ,@data-states))))

(define (extract-enter-data-clauses xm state)
  (extract-data-clauses xm state #t))

(define (extract-exit-data-clauses xm state)
  (extract-data-clauses xm state #f))

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

(define (gen-par label . states)
  `
  (OMPPragma
   (@ (__macc ,label))
   (string "PARALLEL")
   (list
    (list
     (string "DIR_NUM_THREADS")
     (Var "__MACC_NUMGPUS")
     ))

   (compoundStatement
    (symbols
     (id (@ (type "int") (sclass "auto"))
         (name "__macc_tnum")))

    (declarations
     (varDecl
      (name "__macc_tnum")
      (value
       ,(gen-funcall "omp_get_thread_num"))))

    (body
     (exprStatement
      ,(gen-funcall "__macc_set_gpu_num" '(Var "__macc_tnum")))

     ,@states
     ))))

(define (gen-par-data . states)
  (apply gen-par (cons "DATA" states)))

(define (gen-par-kernel . states)
  (apply gen-par (cons "KERNEL" states)))

(define (parallelize-data xm state)
  (gen-compound
   (gen-par-data (extract-enter-data-clauses xm state))

   (~ (sxml:content state) 2)

   (gen-par-data (extract-exit-data-clauses xm state))
   ))

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
                           `(Var (@ (__macc_info_count-region ,cr)) ,varname)))]

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
           `(,name ,(or (assoc-ref renaming varname) varname)))]

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
                               ,(if (and (not until-equal) (= until-n new-until-n))
                                    (- new-until-n step-n)
                                    new-until-n))

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

(define NEW_ARRAY_COUNT 0)

(define (new-array name)
  #"__macc__~|name|_~(inc! NEW_ARRAY_COUNT)")

(define (generate-region-exprs
         indexes
         def-lb-set-var def-ub-set-var
         top-loop-counter-varname top-loop-lb-set-name top-loop-ub-set-name)
  (define tmpvar-name "__macc_generate_region_exprs_tmp")
  (define tmpvar      `(Var ,tmpvar-name))

  (define (rec expr)
    (cond [(not (sxml:element? expr))
           (list expr)]

          [(and (eq? (sxml:name expr) 'Var) (sxml:attr expr '__macc_info_count-region))
           => (lambda (cr)
                (if (eq? top-loop-counter-varname (sxml:car-content expr))
                    `((arrayRef (@ (type "int")) (arrayAddr ,top-loop-lb-set-name) ,tmpvar)
                      (arrayRef (@ (type "int")) (arrayAddr ,top-loop-ub-set-name) ,tmpvar))

                    `(,(~ cr 0) ,(~ cr 1))
                    ))]

          [else
           (map
            (cut sxml:change-content expr <>)
            (cartesian-product (map rec (sxml:content expr))))]
          ))

  `
  (compoundStatement
   (symbols
    (id (@ (type "int") (sclass "auto"))
        (name ,tmpvar-name)))

   (declarations
    (varDecl
     (name ,tmpvar-name)))

    (body
     ,@(map
        (lambda (idx)
          `
          (forStatement
           (init
            (assignExpr ,tmpvar (intConstant "0")))

           (condition
            (logLTExpr
             ,tmpvar
             (Var "__MACC_NUMGPUS")))

           (iter
            (postIncrExpr ,tmpvar))

           (body
            (exprStatement
             ,(gen-funcall "__macc_update_access_region" def-lb-set-var def-ub-set-var tmpvar idx)))
           ))
        (append-map rec indexes))
     )))

(define (generate-communication
         xm indexes-col
         top-loop-counter-varname top-loop-lb-set-name top-loop-ub-set-name)
  (let* ([col-varname (~ indexes-col 0)]
         [use-indexes (~ indexes-col 1)]
         [def-indexes (~ indexes-col 2)]

         [def-lb-set-name (new-array #"~|col-varname|_def_lb_set")]
         [def-ub-set-name (new-array #"~|col-varname|_def_ub_set")]
         [def-lb-set-var `(Var ,def-lb-set-name)]
         [def-ub-set-var `(Var ,def-ub-set-name)]

         [col-var `(Var ,col-varname)])

    (add-setting-array! xm def-lb-set-name)
    (add-setting-array! xm def-ub-set-name)

    (list
     (gen-compound
      `(exprStatement
        ,(gen-funcall "__macc_init_access_region" def-lb-set-var def-ub-set-var))

      (generate-region-exprs
       def-indexes
       def-lb-set-var def-ub-set-var
       top-loop-counter-varname top-loop-lb-set-name top-loop-ub-set-name))

     `
     (exprStatement
      ,(gen-funcall "__macc_DtoH_update" col-var def-lb-set-var def-ub-set-var '(Var "__macc_tnum")))

     `
     (exprStatement
      ,(gen-funcall "__macc_HtoD_update" col-var def-lb-set-var def-ub-set-var '(Var "__macc_tnum")))
     )))

(define (parallelize-acc-parallel xm state)
  (let* ([state            (rename-vars state)]
         [indexes-cols     (extract-indexes-collections state)]

         [top-loop         ((car-sxpath '(// forStatement)) state)]
         [top-loop-counter (car (extract-loop-counters top-loop))]
         [top-loop-counter-varname (car top-loop-counter)]
         [top-loop-lb-set-name (new-array #"~|top-loop-counter-varname|_loop_lb_set")]
         [top-loop-ub-set-name (new-array #"~|top-loop-counter-varname|_loop_ub_set")])

    (add-setting-array! xm top-loop-lb-set-name)
    (add-setting-array! xm top-loop-ub-set-name)

    (let ([top-loop-init    ((car-sxpath "init")      top-loop)]
          [top-loop-cond    ((car-sxpath "condition") top-loop)])
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

    (match-let1 (calcs updates-DtoH updates-HtoD)
                (apply zip
                       (map
                        (cut
                         generate-communication
                         xm
                         <>
                         top-loop-counter-varname
                         top-loop-lb-set-name
                         top-loop-ub-set-name)
                        indexes-cols))

      (gen-compound
       `(exprStatement
         ,(gen-funcall
           "__macc_set_loop_region"
           `(Var ,top-loop-lb-set-name)
           `(Var ,top-loop-ub-set-name)
           (~ top-loop-counter 1)
           (~ top-loop-counter 2)
           (~ top-loop-counter 3)
           `(intConstant ,(if (eq? (~ top-loop-counter 4) '<=) "1" "0"))
           ))

       (apply gen-compound calcs)

       (gen-par-kernel

        state

        (apply gen-compound updates-DtoH)
        `(OMPPragma (string "BARRIER") (list))
        (apply gen-compound updates-HtoD)

        ))
      )))

(define (parallelize-acc! xm state)
  (and-let* ([(sxml:add-attr! state '(__macc_info_pass2 1))]
             [dirname ((ccc-sxpath "string") state)]
             [par (match dirname
                     ["PARALLEL"
                      parallelize-acc-parallel]

                     ["DATA"
                      parallelize-data]

                     [else #f])])
    (sxml:change! state (list-copy-deep (par xm state)))
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
         (cons
          `(exprStatement ,(gen-funcall "__macc_init"))
          (cdr main-body)))))
    ))

(define (pass2 xm)
  (rlet1 xm (xm-copy xm)
    (add-macc-init! xm)

    (let ([defs ((sxpath "functionDefinition") (xm-global-declarations xm))])
      (let loop ([bodies (append-map (sxpath "body") defs)])
        (unless (null? bodies)
          (for-each
           (cut parallelize-acc! xm <>)
           (append-map (sxpath "ACCPragma") bodies))
          (loop (append-map sxml:content bodies))
          )))))
