#!/bin/bash
gcc -Wall -Werror -pedantic -c -fpic *.c
gcc -shared -o liball.so *.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
