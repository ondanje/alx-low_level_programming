#!/bin/bash
gcc -Wall -Werror -pedantic -c -fpic *.c
gcc -shared -o liball.so *.o
