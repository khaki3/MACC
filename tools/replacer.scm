#|

Replace expressions in num_gangs (due to a bug of PGI compiler)
---
#pragma acc parallel num_gangs(10 / A)
---

  ||
  \/

---
int __macc_num_gangs = 10 / A;
#pragma acc parallel num_gangs(__macc_num_gangs)
---

|#

(use srfi-11)

(define NUM_GANGS_COUNT 0)

(define (cut-until-closing-paren str)
  (let loop ([stack '( #\( )] [rest (cdr (string->list str))] [count 1])
    (if (= count 0)
        (values (list->string (reverse stack))
                (list->string rest))
        (let* ([head (car rest)]
               [tail (cdr rest)])
          (loop (cons head stack) tail
                (+ count (cond [(equal? head #\) ) -1]
                               [(equal? head #\( )  1]
                               [else               0])))
          ))))

;; pgcc-Fatal-/pgi/linux86-64/17.10/bin/pgc TERMINATED by signal 6
;;
;; (define (replace-num_gangs line)
;;   (let1 ma (#/^(.*num_gangs\s*)(\(.*)$/ line)
;;     (if (not ma) line
;;         (let-values ([(paren tail) (cut-until-closing-paren (ma 2))])
;;           (let1 varname #"__macc_num_gangs_~NUM_GANGS_COUNT"
;;             (print #"int ~varname = ~paren;")
;;             (inc! NUM_GANGS_COUNT)
;;             (string-append (ma 1) " (" varname ") " tail)
;;             )))))

(define (replace-num_gangs line)
  (let1 ma (#/^(.*num_gangs\s*)(\(.*)$/ line)
    (if (not ma) line
        (let-values ([(paren tail) (cut-until-closing-paren (ma 2))])
          (let1 varname #"__macc_num_gangs"
            (print #"~varname = ~paren;")
            (string-append (ma 1) " (" varname ") " tail)
            )))))

(define (main args)
  (until (read-line) eof-object? => line
    (if (rxmatch #/^\#pragma acc (kernels|parallel)/ line)
        (print (replace-num_gangs line))
        (print line)
        )))
