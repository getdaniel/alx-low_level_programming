#!/bin/bash
gcc -c fPIC *.c
gcc -shared liball.so *.o
