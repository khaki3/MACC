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
;;; - KERNELS       => PARALLEL
;;;

(define (split-acc-*-loop-clauses clauses)
  (let loop ([cl1 '(list)] [cl2 '(list)] [clauses (cdr clauses)])
    (if (null? clauses)
        (values (reverse cl1) (reverse cl2))

        (let* ([head (car clauses)]
               [rest (cdr clauses)])
          (match1 ((ccc-sxpath "string") head)
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
                      "DEFAULT")
            (loop (cons head cl1) cl2 rest)
            (loop cl1 (cons head cl2) rest)
            )))))

(define (transform-acc-*-loop! state dir)
  (match-let1 (_ clauses body) (sxml:content state)
    (let-values ([(cl1 cl2) (split-acc-*-loop-clauses clauses)])
      (sxml:change-content! state
       `((string ,dir)
         ,cl1
         (ACCPragma
          (string "LOOP")
          ,cl2
          ,body)))
      (transform! body)
      )))

(define (transform-acc-parallel-loop! state)
  (transform-acc-*-loop! state "PARALLEL"))

(define (transform-acc-kernels-loop! state)
  (transform-acc-*-loop! state "KERNELS"))

(define (transform-acc-kernels! state)
  ;; TODO
  )

(define (transform-acc! state)
  ((match ((ccc-sxpath "string") state)
     ["PARALLEL_LOOP" transform-acc-parallel-loop!]
     ["KERNELS_LOOP"  transform-acc-kernels-loop!]
     ["KERNELS"       transform-acc-kernels!]
     [else (^s (transform! (~ (sxml:content s) 2)))])
   state))

(define (transform! state)
  (case (sxml:name state)
    [(ACCPragma)
     (transform-acc! state)]

    [(functionDefinition compoundStatement
      doStatement whileStatment forStatement switchStatement)
     (transform-several! ((content-car-sxpath "body") state))]

    [(ifStatement)
     (transform-several! (map cadr (sxml:content state)))]
    ))

(define (transform-several! ss)
  (for-each transform! ss))

(define (pass0 xm)
  (rlet1 xm (xm-copy xm)
    (let ([defs ((sxpath "functionDefinition") (xm-global-declarations xm))])
      (transform-several! defs)
      )))
