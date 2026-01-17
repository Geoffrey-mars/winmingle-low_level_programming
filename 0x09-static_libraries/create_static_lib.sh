#!/bin/bash
#this tells the system this is bash Script

# This script compiles all C files and builds a static library liball.a

# Compile all C files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create static library liball.a
ar rcs liball.a *.o

