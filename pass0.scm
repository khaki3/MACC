(define-module pass0
  (use util)
  (use xm)

  (use srfi-11)
  (use util.match)
  (use sxml.tools)
  (use sxml.sxpath)

  (export
   pass0
   ))
(select-module pass0)

;;;
;;; PASS0
;;;
;;; Transform ACCPragma into the form supported by macc.
;;;
;;; - PARALLEL_LOOP => PARALLEL & LOOP
;;; - KERNELS_LOOP  => KERNELS  & LOOP
;;;
;;; - KERNELS COPYIN  => DATA & KERNELS
;;; - PARALLEL COPYIN => DATA & PARALLEL
;;;
;;; - KERNELS       => PARALLEL
;;;

(define-syntax define-clauses-separater
  (syntax-rules ()
    [(_ name pat)
     (define name
       (lambda (clauses)
         (let loop ([cl1 '(list)] [cl2 '(list)] [clauses (cdr clauses)])
           (if (null? clauses)
               (values (reverse cl1) (reverse cl2))

               (let* ([head (car clauses)]
                      [rest (cdr clauses)])
                 (match1 ((ccc-sxpath "string") head) pat
                   (loop (cons head cl1) cl2 rest)
                   (loop cl1 (cons head cl2) rest)
                   ))))))]
    ))

(define-clauses-separater separate-acc-*-loop-clauses
  (or "ASYNC"
      "WAIT"
      "NUM_GANGS"
      "NUM_WORKERS"
      "VECT_LEN"
      "DEVICE_TYPE"
      "IF"
      "REDUCTION_PLUS"
      "REDUCTION_MINUS"
      "REDUCTION_MUL"
      "REDUCTION_BITAND"
      "REDUCTION_BITOR"
      "REDUCTION_BITXOR"
      "REDUCTION_LOGAND"
      "REDUCTION_LOGOR"
      "REDUCTION_MIN"
      "REDUCTION_MAX"
      "COPY"
      "COPYIN"
      "COPYOUT"
      "CREATE"
      "PRESENT"
      "PRESENT_OR_COPY"
      "PRESENT_OR_COPYIN"
      "PRESENT_OR_COPYOUT"
      "PRESENT_OR_CREATE"
      "DEVICEPTR"
      "PRIVATE"
      "FIRSTPRIVATE"
      "DEFAULT"))

(define (split-acc-*-loop! state)
  (match-let1 (('string dir) clauses body) (sxml:content state)
    (let-values ([(cl1 cl2) (separate-acc-*-loop-clauses clauses)])
      (sxml:change-content! state
       `((string ,((#/^(KERNELS|PARALLEL)_LOOP$/ dir) 1))
         ,cl1
         (ACCPragma
          (string "LOOP")
          ,cl2
          ,body)))
      )))

(define (tightly-nested-loop? state)
  ;; TODO
  )

(define (independent-loop? state)
  ;; TODO
  )

(define (add-loop-directive! state)
  (let ([state-orig state] ; for sxml:change!
        [state (list-copy-deep state)])

    (sxml:add-attr! state '(__macc_info_pass0_parallelized 1))

    (sxml:change!
     state-orig

     `(ACCPragma
       (string "LOOP")
       (list (list (string "INDEPENDENT")))
       ,state))
    ))

(define (acc-parallelize! state)
  (when (and (not (sxml:attr state '__macc_info_pass0_parallelized))
             (tightly-nested-loop? state)
             (independent-loop? state))
    (let ([state-orig state] ; for sxml:change!
          [state (list-copy-deep state)])
      (for-each add-loop-directive! ((sxpath `(// ,(sxpath:name 'forStatement))) state))
      (sxml:change! state-orig `(ACCPragma (string "PARALLEL") (list) ,state))
      )))

(define (acc-kernels->acc-parallel-compound state)
  (match-let1 (_ _ body) (sxml:content state)
    (begin0
      body
      (for-each acc-parallelize! ((sxpath '(// forStatement)) state))
      )))

(define (transform-acc-kernels! state)
  (sxml:change! state (acc-kernels->acc-parallel-compound state)))

(define-clauses-separater separate-acc-data-clauses
  (or "COPY"
      "COPYIN"
      "COPYOUT"
      "CREATE"
      "PRESENT"
      "PRESENT_OR_COPY"
      "PRESENT_OR_COPYIN"
      "PRESENT_OR_COPYOUT"
      "PRESENT_OR_CREATE"))

(define (split-acc-data-clauses! state)
  (match-let1 (('string dir) clauses body) (sxml:content state)
    (let-values ([(cl1 cl2) (separate-acc-data-clauses clauses)])
      (when (> (length cl1) 1)
        (sxml:change-content!
         state
         `((string "DATA")
           ,cl1
           (ACCPragma (string ,((#/^(KERNELS|PARALLEL)$/ dir) 1)) ,cl2 ,body)))
        ))))

(define (pass0 xm)
  (rlet1 xm (xm-copy xm)
    (let* ([decls (xm-global-declarations xm)]
           [acc-trans!
            (lambda (proc pred?)
              (for-each proc ((sxpath `(// (ACCPragma (string *text* ,(make-sxpath-query pred?))))) decls)))])
      (acc-trans! split-acc-*-loop!       #/^(KERNELS|PARALLEL)_LOOP$/)
      (acc-trans! split-acc-data-clauses! #/^(KERNELS|PARALLEL)$/)
      (acc-trans! transform-acc-kernels!  #/^KERNELS$/)
      )))
