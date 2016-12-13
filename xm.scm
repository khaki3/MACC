(define-module xm
  (use sxml.tools)
  (use sxml.sxpath)
  (use gauche.record)

  (use util)

  (export
   make-xm
   xm-attributes
   xm-type-table
   xm-global-symbols
   xm-global-declarations

   sxml->xm
   xm->sxml
   xm-copy
   ))
(select-module xm)

(define-record-type xm #t #t
  attributes
  (type-table)
  (global-symbols)
  (global-declarations))

(define (xm-copy xm)
  (make-xm
   (list-copy-deep (xm-attributes xm))
   (list-copy-deep (xm-type-table xm))
   (list-copy-deep (xm-global-symbols xm))
   (list-copy-deep (xm-global-declarations xm))))

(define (sxml->xm sxml)
  (make-xm
   (sxml:attr-list                    sxml)
   ((car-sxpath "typeTable")          sxml)
   ((car-sxpath "globalSymbols")      sxml)
   ((car-sxpath "globalDeclarations") sxml)))

(define (xm->sxml xm)
  (sxml:change-attrlist
   (list 'XcodeProgram
         (xm-type-table xm)
         (xm-global-symbols xm)
         (xm-global-declarations xm))
   (xm-attributes xm)))
