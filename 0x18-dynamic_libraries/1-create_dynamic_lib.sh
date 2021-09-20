#!/bin/bash
gcc -c *.c -fpic
gcc -shared -o liball.so *.o
chmod u+x liball.so
export LD_LIBRARY_PATH=".:$LD_LIBRARY_PATH"
