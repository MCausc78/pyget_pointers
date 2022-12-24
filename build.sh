#!/bin/bash
echo "functions.S"
clang -shared -c -o functions.o functions.S
echo "extra.c"
clang -shared -c -o extra.o extra.c -I/usr/include/python3.10
echo "link"
clang -shared -o extra.so *.o -lpython3.10
