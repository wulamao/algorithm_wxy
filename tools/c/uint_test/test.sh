#!/bin/bash

gcc -c -I include sub/sub.c -o sub.o
gcc -c -I include unit_test/test_sub.c -o test_sub.o
gcc -I include unit_test/test_main.c sub.o test_sub.o -o test -lcheck


