(use srfi-13)

;; " a [ \n" is not closed.
(define (is-closed? line)
  (= (string-count line #\[)
     (string-count line #\])))

(define (collect line)
  (if (is-closed? line)
      (print (convert line))
      (collect (string-append line (read-line)))
      ))

(define (surround line)
  (let loop ([ret '()] [rest (string->list line)] [count 0])
    (if (null? rest)
        (list->string (reverse ret))

        (let ([head (car rest)]
              [tail (cdr rest)])
          (cond [(eq? head #\[)
                 (loop (if (= count 0)
                           (append '(#\[ #\@) ret)
                           (cons #\[ ret))
                       tail
                       (+ count 1))]

                [(eq? head #\])
                 (loop (if (= count 1)
                           (append '(#\@ #\]) ret)
                           (cons #\] ret))
                       tail
                       (- count 1))]

                [else (loop (cons head ret) tail count)]
                )))))

(define SHAPES '())

(define (extract-index ref)
  (let1 index '()
    (regexp-replace-all
     #/@\[(?<i>[^@]*)]\@/
     ref
     (lambda (m)
       (let1 i (m 'i)
         (push! index (cond [(#/^\s*$/ i) ""]
                            [(string-index i #\:) i] ; acc
                            [else (string-append "(" i ")")]))
         )))

    (reverse index)))

(define (n->1 index shape)
  (if (= (length shape) 1)
      (car index)

      (string-append
       "(" (string-join (cons (car index) (cdr shape)) "*") ")"
       " + "
       (n->1 (cdr index) (cdr shape)))))

(define (reshape varname ref)
  (let ([index (extract-index ref)]
        [shape (assoc-ref SHAPES varname)])
    (string-append
     "["
     (if (not shape)
         (begin
           (push! SHAPES (cons varname index))
           (if (string-null? (car index)) ""
               (string-join index "*")))

         (n->1 index shape))
     "]")))

(define (convert str)
  (let1 s
      (regexp-replace-all
       #/(?<varname>[a-zA-Z_][a-zA-Z0-9_]*)(?<ref>(\s*@[^@]*@)+)/
       (surround str)
       (lambda (m)
         (string-append
          (m 'varname)
          (reshape (m 'varname) (m 'ref))))
       )

    (regexp-replace-all*
     s
     #/@/ ""
     #/\(\s*[a-zA-Z_][a-zA-Z0-9_]*\s*\(\s*\*\s*\)\s*(\[[^\]]*\]\s*)+\)/ "")))

(define (main args)
  (until (read-line) eof-object? => line
    (collect line))
  0)
