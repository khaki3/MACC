# macc

## Requirements
* Gauche 0.9.5
* https://github.com/uwx/omni-compiler/tree/extend-c-decompiler

## Usage
```
% ./tools/c-to-xcodeml acc.c > acc.xml
% gosh main.scm < acc.xml > out.xml
% ./tools/xcodeml-to-c out.xml > out.c
```
