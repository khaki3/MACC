# macc

An OpenACC transpiler for automatic multi-GPU use.

## Requirements
* Gauche (>= 0.9.5)
* Omni Compiler 1.1.0
* PGI compiler (>= 16.10)

## Usage
```
% cat input.c | ./tools/c-to-xcodeml -m | gosh main.scm | ./tools/xcodeml-to-c -m > output.c
```
