#!/bin/bash

gcc -fPIC -Wall -c *.c
gcc -shared -o liball.so *.o
