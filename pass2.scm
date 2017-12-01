(define-module pass2
  (use util)
  (use xm)
  (use analysis)

  (use srfi-1)
  (use srfi-11)
  (use util.match)
  (use sxml.tools)
  (use sxml.sxpath)
  (use util.combinations)
  (use gauche.sequence)

  (export
   pass2
   ))
(select-module pass2)

;;;
;;; PASS2
;;;
;;; Parallelize acc regions individually
;;;

(define (gen-par :key (clauses '()) (state #f) (with_tnum #t) (num_threads '(Var "__MACC_NUMGPUS")))
  `
  (OMPPragma
   (string "PARALLEL")
   (list
    (list (string "DIR_NUM_THREADS") ,num_threads)
    ,@clauses)

   ,
   (if with_tnum
       (gen-compound-with-local-vars
        `(("int" "__macc_tnum" ,(gen-funcall-expr "omp_get_thread_num")))
        (gen-funcall "__macc_set_gpu_num" '(Var "__macc_tnum"))
        state)

       state)
   ))

(define (generate-data-state label arg enter)
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
       [var    (~ (sxml:content arg)    0)]
       [start  (~ (~ (sxml:content arg) 1) 1)]
       [length (~ (~ (sxml:content arg) 1) 2)])

    (gen-funcall
     fun-name
     '(Var "__macc_tnum")
     var
     `(sizeOfExpr (typeName (@ (type ,(sxml:attr var 'element_type)))))
     start
     length)
    ))

(define (translate-com-clauses state gen)
  (apply gen-compound

   (append-map
    (lambda (c)
      (let ([label ((ccc-sxpath "string")        c)]
            [args  ((content-car-sxpath "list")  c)])
        (filter-map (pa$ gen label) args)))

    ((content-car-sxpath "list") state))
   ))

(define (translate-data-clauses state enter)
  (translate-com-clauses
   state
   (lambda (label arg) (generate-data-state label arg enter))))

(define (parallelize-acc-data! xm state)
  (sxml:change!
   state

   (gen-compound
    (gen-par :state (translate-data-clauses state #t))

    (~ (sxml:content state) 2)

    (gen-par :state (translate-data-clauses state #f))
    )))

(define (generate-update-state label arg)
  (and-let*
      ([fun-name
        (match label
          ["HOST"
           "__macc_update_self"]

          ["DEVICE"
           "__macc_update_device"]

          [else #f])]
       [var    (~ (sxml:content arg)    0)]
       [start  (~ (~ (sxml:content arg) 1) 1)]
       [length (~ (~ (sxml:content arg) 1) 2)])

    (gen-funcall
     fun-name
     '(Var "__macc_tnum")
     var
     `(sizeOfExpr (typeName (@ (type ,(sxml:attr var 'element_type)))))
     start
     length)
    ))

(define (translate-update-clauses state)
  (translate-com-clauses state generate-update-state))

(define (parallelize-acc-update! xm state)
  (sxml:change! state (gen-par :state (translate-update-clauses state))))

(define NEW_TYPE_COUNT 0)

(define (new-array-type)
  #"macc__A~(inc! NEW_TYPE_COUNT)")

(define (new-pointer-type)
  #"macc__P~(inc! NEW_TYPE_COUNT)")

(define-constant MAX_GPU_NUM "10")

(define (add-setting-array! xm :optional (type "int") (size MAX_GPU_NUM))
  (rlet1 atype (new-array-type)
    (sxml:content-push!
     (xm-type-table xm)
     `(arrayType (@ (type ,atype) (element_type ,type) (array_size ,size))))))

(define (add-pointer! xm type)
  (rlet1 ptype (new-array-type)
    (sxml:content-push!
     (xm-type-table xm)
     `(pointerType (@ (type ,ptype) (ref ,type))))))

;; extract vars without loop-counters
(define (extract-dynamic-vars expr)
  (remove
   (cut sxml:attr <> '__macc_info_count-region)
   ((node-all (ntype?? 'Var)) expr)))

;; (values (use-lb-set-name use-ub-set-name def-lb-set-name def-ub-set-name) state)
(define (generate-access-region-calcs indexes-col macc-gpu-num-var top-loop-counter-varname)
  (define (extend-loop-counter expr)
    (cond [(not (sxml:element? expr))
           (list expr)]

          [(and (eq? (sxml:name expr) 'Var) (sxml:attr expr '__macc_info_count-region))
           => (lambda (cr)
                (if (eq? top-loop-counter-varname (sxml:car-content expr))
                    '((Var "__macc_top_loop_lb")
                      (Var "__macc_top_loop_ub"))

                    (append-map extend-loop-counter (list (~ cr 0) (~ cr 1)))
                    ))]

          [else
           (map
            (cut sxml:change-content expr <>)
            (cartesian-product (map extend-loop-counter (sxml:content expr))))]
          ))

  (let* ([col-varname (~ indexes-col 0)]
         [use-indexes (~ indexes-col 1)]
         [def-indexes (~ indexes-col 2)]

         [use-lb-set-name #"__macc_~|col-varname|_use_lb_set"]
         [use-ub-set-name #"__macc_~|col-varname|_use_ub_set"]
         [use-lb-set-var `(Var ,use-lb-set-name)]
         [use-ub-set-var `(Var ,use-ub-set-name)]

         [def-lb-set-name #"__macc_~|col-varname|_def_lb_set"]
         [def-ub-set-name #"__macc_~|col-varname|_def_ub_set"]
         [def-lb-set-var `(Var ,def-lb-set-name)]
         [def-ub-set-var `(Var ,def-ub-set-name)])

    (values
     (list use-lb-set-name use-ub-set-name def-lb-set-name def-ub-set-name)

     (gen-compound
      (gen-funcall "__macc_init_access_region" macc-gpu-num-var use-lb-set-var use-ub-set-var)
      (gen-funcall "__macc_init_access_region" macc-gpu-num-var def-lb-set-var def-ub-set-var)

      (apply gen-compound
       (map (lambda (e) (gen-funcall "__macc_update_access_region"
                                     macc-gpu-num-var use-lb-set-var use-ub-set-var e))
            (append-map extend-loop-counter (or use-indexes '()) )))

      (apply gen-compound
       (map (lambda (e) (gen-funcall "__macc_update_access_region"
                                     macc-gpu-num-var def-lb-set-var def-ub-set-var e))
            (append-map extend-loop-counter (or def-indexes '()) )))

      (gen-funcall
       "__macc_adjust_data_region"
       `(Var ,col-varname) macc-gpu-num-var use-lb-set-var use-ub-set-var)

      (gen-funcall
       "__macc_adjust_data_region"
       `(Var ,col-varname) macc-gpu-num-var def-lb-set-var def-ub-set-var)

      ))))

;; '( (op . var) ... )
(define (collect-acc-reductions state)
  (let ([reductions
         ((sxpath
           `(// ,(sxpath:name 'ACCPragma)
                list (list (string *text* ,(make-sxpath-query #/^REDUCTION_/)))))
          state)]
        [defined
         ((sxpath '(// compoundStatement declarations varDecl name *text*)) state)])
    (append-map
     (lambda (r)
       (let* ([op       ((car-sxpath '(string *text*)) r)]
              [varnames ((sxpath '(list Var *text*))   r)]
              [varnames (lset-difference string=? varnames defined)])
         (map (lambda (vn) (cons op `(Var ,vn))) varnames)))
     reductions)
    ))

;;
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

(define (parallelize-acc-parallel! xm state is-loop)
  (let* ([state-orig      state] ; for sxml:change!
         [state           (list-copy-deep state)]

         [indexes-cols    (extract-indexes-collections state)]
         [reductions      (collect-acc-reductions state)]
         [privates        (extract-omp-privates state)]

         [top-loop         (and is-loop ((car-sxpath '(// forStatement)) state))]
         [top-loop-counter (and is-loop (car (extract-loop-counters top-loop)))]
         [top-loop-counter-varname (and is-loop (car top-loop-counter))]
         [top-loop-lb-set-name (and is-loop #"__macc_~|top-loop-counter-varname|_loop_lb_set")]
         [top-loop-ub-set-name (and is-loop #"__macc_~|top-loop-counter-varname|_loop_ub_set")]

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
             (if is-loop (drop (take top-loop-counter 3) 1) '())
             )))]

         [pint-type  (add-pointer! xm "int")]
         [pvoid-type (add-pointer! xm "void")]

         [numcols (length indexes-cols)]

         [int-array-type   (add-setting-array! xm "int"      numcols)]
         [pint-array-type  (add-setting-array! xm pint-type  numcols)]
         [pvoid-array-type (add-setting-array! xm pvoid-type numcols)]

         [data-sets '()]
         [statics
          (if (not is-loop) '()

              ;; Rewrite loop counters
              (let ([top-loop-init ((car-sxpath "init")      top-loop)]
                    [top-loop-cond ((car-sxpath "condition") top-loop)])
                (sxml:change-content!
                 top-loop-init

                 (list
                  (gen-var=-expr
                   top-loop-counter-varname
                   `(Var "__macc_top_loop_lb")
                   )))

                (sxml:change-content!
                 top-loop-cond
                 (list
                  (gen-var<=-expr
                   top-loop-counter-varname
                   `(Var "__macc_top_loop_ub")
                   )))

                (list (cons top-loop-lb-set-name (add-setting-array! xm))
                      (cons top-loop-ub-set-name (add-setting-array! xm)))))]

         [last-dvars
          (map
           (^[v]
             (let1 nn #"__macc_~(sxml:car-content v)_last"
               (push! statics (cons nn (sxml:attr v 'type)))
               `(Var ,nn)))
           dynamic-vars)]

         [region-calculation
          (map-with-index
           (lambda (i col)
             (let-values ([(set-names state)
                           (generate-access-region-calcs
                            col '(Var "__macc_gpu_num") top-loop-counter-varname)])
               (let* ([region-type
                       (lambda (indexes)
                         (cond [(not indexes) 0]
                               [(null? indexes) 1]
                               [else 2]))]
                      [varname  (~ col 0)]
                      [use-type (region-type (~ col 1))]
                      [def-type (region-type (~ col 2))]
                      [use-lb-name (~ set-names 0)]
                      [use-ub-name (~ set-names 1)]
                      [def-lb-name (~ set-names 2)]
                      [def-ub-name (~ set-names 3)])

                 (push! statics (cons use-lb-name (add-setting-array! xm)))
                 (push! statics (cons use-ub-name (add-setting-array! xm)))
                 (push! statics (cons def-lb-name (add-setting-array! xm)))
                 (push! statics (cons def-ub-name (add-setting-array! xm)))

                 (push!
                  data-sets
                  (list
                   varname
                   use-type use-lb-name use-ub-name
                   def-type def-lb-name def-ub-name))

                 (gen-compound
                  state

                  (gen-= (gen-arrayref-int-expr "__macc_ptrs" i)
                         `(Var ,varname))

                  (gen-= (gen-arrayref-int-expr "__macc_use_types" i)
                         (gen-int-expr use-type))
                  (gen-= (gen-arrayref-int-expr "__macc_use_lb_sets" i)
                         `(Var ,use-lb-name))
                  (gen-= (gen-arrayref-int-expr "__macc_use_ub_sets" i)
                         `(Var ,use-ub-name))

                  (gen-= (gen-arrayref-int-expr "__macc_def_types" i)
                         (gen-int-expr def-type))
                  (gen-= (gen-arrayref-int-expr "__macc_def_lb_sets" i)
                         `(Var ,def-lb-name))
                  (gen-= (gen-arrayref-int-expr "__macc_def_ub_sets" i)
                         `(Var ,def-ub-name)))

                 )))
           indexes-cols)])

    ;; New state
    (sxml:change!
     state-orig

     (gen-compound-with-local-vars
      `(("int" "__macc_region_is_changed" (intConstant "1") "static")
        ("int" "__macc_multi" (intConstant "1") "static")

        (,pvoid-array-type "__macc_ptrs"        #f "static")
        (,int-array-type   "__macc_use_types"   #f "static")
        (,pint-array-type  "__macc_use_lb_sets" #f "static")
        (,pint-array-type  "__macc_use_ub_sets" #f "static")
        (,int-array-type   "__macc_def_types"   #f "static")
        (,pint-array-type  "__macc_def_lb_sets" #f "static")
        (,pint-array-type  "__macc_def_ub_sets" #f "static")

        ,@(map
           (match-lambda1 (name . type)
             (list type name #f "static"))
           statics))

      (gen-var=
       "__macc_region_is_changed"
       (apply gen-OR-expr
        '(Var "__macc_region_is_changed")
        (map gen-!=-expr dynamic-vars last-dvars)))

      (gen-if
       ;; cond
       '(Var "__macc_region_is_changed")

       ;; then
       (gen-compound
        (gen-var=int "__macc_multi"             1)
        (gen-var=int "__macc_region_is_changed" 0)

        (apply gen-compound
         (map gen-= last-dvars dynamic-vars))

        (gen-when is-loop
          (gen-funcall
           "__macc_calc_loop_region"
           `(Var ,top-loop-lb-set-name)
           `(Var ,top-loop-ub-set-name)
           (~ top-loop-counter 1)
           (~ top-loop-counter 2)
           (~ top-loop-counter 3)
           (gen-int-expr (if (eq? (~ top-loop-counter 4) '<=) 1 0))))

        (gen-par
         :num_threads (if is-loop `(Var "__MACC_NUMGPUS") (gen-int-expr 1))
         :with_tnum #f
         :state
         (gen-compound-with-local-vars
          '(("int" "__macc_gpu_num")
            ("int" "__macc_top_loop_lb")
            ("int" "__macc_top_loop_ub"))

          (gen-var= "__macc_gpu_num" (gen-funcall-expr "omp_get_thread_num"))

          (gen-when is-loop
            (gen-var=
             "__macc_top_loop_lb"
             (gen-arrayref-var-expr top-loop-lb-set-name "__macc_gpu_num"))
            (gen-var=
             "__macc_top_loop_ub"
             (gen-arrayref-var-expr top-loop-ub-set-name "__macc_gpu_num")))

          (apply gen-compound region-calculation)))

        (gen-if
         ;; cond
         (if is-loop
             (apply gen-OR-expr
              (filter-map
               (match-lambda1 (_ _ _ _ def-type def-lb-name def-ub-name)
                 (case def-type
                   [(0) (gen-int-expr 1)]

                   [(1) #f]

                   [(2) (gen-funcall-expr
                         "__macc_region_is_overlapping"
                         `(Var ,def-lb-name) `(Var ,def-ub-name))]
                   ))
               data-sets))

             (gen-int-expr 1))

         ;; then
         (gen-compound
          (gen-var=int "__macc_multi" 0)

          (gen-when is-loop
            (gen-funcall
             "__macc_rewrite_loop_region_into_single"
             `(Var ,top-loop-lb-set-name)
             `(Var ,top-loop-ub-set-name))

            (apply gen-compound
             (filter-map
              (match-lambda1 (type lb-name ub-name)
                (and (= type 2)
                     (gen-funcall
                      "__macc_rewrite_data_region_into_single"
                      `(Var ,lb-name)
                      `(Var ,ub-name))))

              (append-map
               (lambda (set)
                 (match-let1 (_ use-type use-lb-name use-ub-name
                                def-type def-lb-name def-ub-name) set
                   (list (list use-type use-lb-name use-ub-name)
                         (list def-type def-lb-name def-ub-name))))
               data-sets))
             ))))

          )) ; ifStatement __macc_region_is_changed

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
       (gen-compound-with-local-vars
        '(("int" "__macc_num_gangs") ; to avoid PGI's bug
          ("int" "__macc_top_loop_lb")
          ("int" "__macc_top_loop_ub"))

        (gen-var=
         "__macc_top_loop_lb"
         (gen-arrayref-var-expr top-loop-lb-set-name "__macc_tnum"))
        (gen-var=
         "__macc_top_loop_ub"
         (gen-arrayref-var-expr top-loop-ub-set-name "__macc_tnum"))

        (gen-funcall
         "__macc_set_data_region_multi"
         '(Var "__macc_tnum")
         '(Var "__macc_multi")
         (gen-int-expr numcols)
         '(Var "__macc_ptrs")
         '(Var "__macc_use_types")
         '(Var "__macc_use_lb_sets")
         '(Var "__macc_use_ub_sets")
         '(Var "__macc_def_types")
         '(Var "__macc_def_lb_sets")
         '(Var "__macc_def_ub_sets"))

        (gen-barrier)

        state)))
     )))

(define (parallelize-acc! xm state)
  (match ((ccc-sxpath "string") state)
    ["DATA"
     (parallelize-acc-data! xm state)]

    ["UPDATE"
     (parallelize-acc-update! xm state)]

    ["PARALLEL"
     (parallelize-acc-parallel!
      xm state (pair? ((sxpath '(// forStatement)) state)))]

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
     (list
      (apply gen-compound
       (gen-funcall "__macc_init")
       (cdr main-body)
       )))
    ))

(define (pass2 xm)
  (rlet1 xm (xm-copy xm)
    (add-macc-init! xm)

    (for-each
     (cut parallelize-acc! xm <>)
     ((sxpath '(// ACCPragma)) (xm-global-declarations xm)))
    ))
