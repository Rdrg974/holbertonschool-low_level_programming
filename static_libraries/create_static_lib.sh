#!/bin/bash
ar -rc liball.a ./*.o
gcc main.c liball.a
