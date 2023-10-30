#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c ./*.c
ar -rc liball.a ./*.o
gcc main.c liball.a
