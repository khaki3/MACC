(define-module util
  (use util.match)
  (use sxml.tools)
  (use sxml.sxpath)
  (use srfi-14)
  (use srfi-27)
  (export
   cdar-sxpath
   if-cdar-sxpath
   ccc-sxpath
   if-ccc-sxpath
   content-car-sxpath
   sxml:car-content
   sxml:change!
   sxml:content-push!
   node-all

   dprint
   list-copy-deep
   match1
   match-lambda1
   ))
(select-module util)

(define-syntax match1
  (syntax-rules ()
    [(_ obj pat th)
     (match1 obj pat th (undefined))]

    [(_ obj pat th el)
     (match obj
       [pat  th]
       [else el])]))

(define-syntax match-lambda1
  (syntax-rules ()
    [(_ pat body ...)
     (match-lambda [pat body ...])]))

(define (list-copy-deep obj)
  (if (list? obj)
      (list-copy (map list-copy-deep obj))
      obj))

(define (sxml:car-content sxml)
  (car (sxml:content sxml)))

(define (sxml:change! obj new)
  (sxml:change-name!     obj (sxml:name      new))
  (sxml:change-attrlist! obj (sxml:attr-list new))
  (sxml:change-content!  obj (sxml:content   new)))

(define-syntax sxml:content-push!
  (syntax-rules ()
    [(_ place item)
     (sxml:change-content! place (cons item (sxml:content place)))]
    ))

;; node-closure U node-self
(define (node-all test-pred?)
  (node-or (node-self test-pred?) (node-closure test-pred?)))

(define (dprint obj)
  (let1 eport (current-error-port)
    (write obj eport)
    (newline eport)))

(define-syntax x-sxpath
  (syntax-rules ()
    [(_ x path) (^[sxml] (x ((sxpath path) sxml)))]))

(define (cdar-sxpath path)
  (x-sxpath cdar path))

(define (content-car-sxpath path)
  (x-sxpath (.$ sxml:content car) path))

;; sxpath -> car -> sxml:content -> car
(define (ccc-sxpath path)
  (x-sxpath (.$ sxml:car-content car) path))

(define-syntax if-pair-x
  (syntax-rules ()
    [(_ x lst) (and (pair? lst) (x lst))]))

(define-syntax if-car
  (syntax-rules ()
    [(_ lst) (if-pair-x car lst)]))

(define-syntax if-cdr
  (syntax-rules ()
    [(_ lst) (if-pair-x cdr lst)]))

(define (if-cdar-sxpath path)
  (x-sxpath
   (^[x]
     (and-let* ([ca   (if-car x)]
                [cda  (if-cdr ca)])
       cda))
   path))

(define (if-ccc-sxpath path)
  (x-sxpath
   (^[x]
     (and-let* ([c   (if-car x)]
                [cc  (sxml:content c)]
                [ccc (if-car cc)])
       ccc))
   path))
