# macc

An OpenACC transpiler for automatic multi-GPU use.

## Requirements
* Gauche 0.9.5
* https://github.com/uwx/omni-compiler/tree/extend-c-decompiler
* PGI compiler

## Usage
```
% cat input.c | ./tools/c-to-xcodeml -m | gosh main.scm | ./tools/xcodeml-to-c > output.c
```
