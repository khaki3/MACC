# Multidimensional array convert tools

N-dim → 1-dim

## example
```
% pgcc -acc -E -I <incdir> *.c | ../tools/c-to-xcodeml -m > tmp.xml
% gosh restyle.scm | ../tools/xcodeml-to-c | gosh convdim.scm > out.c
```

## Requirements
* Gauche 0.9.5
