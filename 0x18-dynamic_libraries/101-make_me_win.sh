#!/bin/bash
gcc -shared -o libmy_lib.so -fpic inj.c
export LD_PRELOAD=$PWD/libmy_lib.so
