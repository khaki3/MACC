# macc

An OpenACC transpiler for automatic multi-GPU use.

## Requirements
* Gauche (>= 0.9.5)
* http://gitlab.m.gsic.titech.ac.jp/matsumura/omni-compiler/tree/extend-c-decompiler
* PGI compiler (>= 16.10)

## Usage
```
% cat input.c | ./tools/c-to-xcodeml -m | gosh main.scm | ./tools/xcodeml-to-c -m > output.c
```
