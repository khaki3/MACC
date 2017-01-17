# macc

Translator for automatic multiple GPUs usage from OpenACC 1.0 to OpenACC 2.5 + OpenMP.

- Kernels which the write accesses are affine will be rewritten to use multi-GPUs. Others will be executed on single GPU.
- Data transfers are generated according to the intersection of the write region and the read region.

## Requirements
* Gauche 0.9.5
* https://github.com/uwx/omni-compiler/tree/extend-c-decompiler
* PGI compiler

## Usage
```
% ./tools/c-to-xcodeml acc.c > acc.xml
% gosh main.scm < acc.xml > out.xml
% ./tools/xcodeml-to-c out.xml > out.c
```

## TODO
- Wrap OpenACC's routines.
- Multidimensional array
