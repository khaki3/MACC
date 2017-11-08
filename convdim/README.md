# Multidimensional array convert tools

N-dim → 1-dim

## example
```
% pgcc -E -I <incdir> *.c | ../tools/c-to-xcodeml > tmp.xml
% gosh rename.scm | ../tools/xcodeml-to-c | gosh convdim.scm > out.c
```

## Requirements
* Gauche 0.9.5