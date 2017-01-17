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
;;; - KERNELS_LOOP  => PARALLEL & LOOP
;;; - KERNELS       => PARALLEL
;;;
;;; - PARALLEL_LOOP   => PARALLEL & LOOP
;;; - PARALLEL COPYIN => DATA & PARALLEL
;;;

(define-syntax define-clauses-separater
  (syntax-rules ()
    [(_ name pat)
     (define name
       (lambda (clauses)
         (let loop ([cl1 '(list)] [cl2 '(list)] [clauses (cdr clauses)])
           (if (null? clauses)
               (values (reverse cl1) (reverse cl2))

               (match-let1 (head . rest) clauses
                 (match1 ((ccc-sxpath "string") head) pat
                   (loop (cons head cl1) cl2 rest)
                   (loop cl1 (cons head cl2) rest)
                   ))))))]
    ))

(define-clauses-separater separate-acc-parallelism-clauses
  (or "NUM_GANGS"
      "NUM_WORKERS"
      "VECT_LEN"
      "GANG"
      "WORKER"
      "VECTOR"))

;; For speeding up
(define (remove-parallelism-clauses! state)
  (match-let1 (_ clauses _) (sxml:content state)
    (let-values ([(_ new-clauses) (separate-acc-parallelism-clauses clauses)])
      (sxml:change-content! clauses (cdr new-clauses))
      )))

(define-clauses-separater separate-acc-*-loop-clauses
  (or "ASYNC"
      "WAIT"
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

(define (split-acc-parallel-loop! state)
  (match-let1 (_ clauses body) (sxml:content state)
    (let-values ([(cl1 cl2) (separate-acc-*-loop-clauses clauses)])
      (sxml:change-content! state
       `((string "PARALLEL")
         ,cl1
         (ACCPragma
          (string "LOOP")
          ,cl2
          ,body)))
      )))

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
  (match-let1 (_ clauses body) (sxml:content state)
    (let-values ([(cl1 cl2) (separate-acc-data-clauses clauses)])
      (when (> (length cl1) 1)
        (sxml:change-content!
         state
         `((string "DATA")
           ,cl1
           (ACCPragma (string "PARALLEL") ,cl2 ,body)))
        ))))

;;
;; FIXME: BUGGY IMPLEMENTATION
;;
;; This works correctly only when the top loop is independent.
;;
(define (translate-acc-kernels-loop! state)
  (match-let1 (_ clauses body) (sxml:content state)
    (sxml:change-content! state `((string "PARALLEL_LOOP") ,clauses ,body))))
;;
(define (translate-acc-kernels! state)
  (match-let1 (_ clauses body) (sxml:content state)
    (sxml:change-content! state `((string "PARALLEL") ,clauses ,body))))

(define (pass0 xm)
  (rlet1 xm (xm-copy xm)
    (let* ([decls (xm-global-declarations xm)]
           [acc-trans!
            (lambda (proc pred?)
              (for-each proc ((sxpath `(// (ACCPragma (string *text* ,(make-sxpath-query pred?))))) decls)))])
      (acc-trans! remove-parallelism-clauses! #/^(KERNELS|PARALLEL)(_LOOP)?$/)
      (acc-trans! translate-acc-kernels-loop! #/^KERNELS_LOOP$/)
      (acc-trans! translate-acc-kernels!      #/^KERNELS$/)
      (acc-trans! split-acc-parallel-loop!    #/^PARALLEL_LOOP$/)
      (acc-trans! split-acc-data-clauses!     #/^PARALLEL$/)
      )))
