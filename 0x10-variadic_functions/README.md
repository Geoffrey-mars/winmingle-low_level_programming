# 0x10. C – Variadic Functions
## Project Description0x10. C – Variadic Functions
## Project Description

This project introduces variadic functions in C, which are functions that can accept a variable number of arguments.
Through these tasks, I learn how to safely handle unknown numbers of parameters using standard C macros.

### Learning Objectives

By completing this project, I am able to explain:

What variadic functions are

How to use the macros:

va_start

va_arg

va_end

Why the const type qualifier is important

How argument type promotion works in variadic functions

⚙️ Requirements

OS: Ubuntu 20.04 LTS

Compiler: gcc

Compilation flags:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89


Allowed editors: vi, vim, emacs

No global variables

Maximum of 5 functions per file

Allowed C standard library functions:

malloc

free

exit

printf allowed only where specified

Allowed macros:

va_start

va_arg

va_end

All files must end with a new line

Header files must be include guarded

The provided main.c files are for testing only

### Project Structure
0x10-variadic_functions/
│
├── README.md
├── variadic_functions.h
├── 0-sum_them_all.c
├── 1-print_numbers.c
├── 2-print_strings.c
└── 3-print_all.c

## Tasks
Task 0: Sum all parameters

File: 0-sum_them_all.c

int sum_them_all(const unsigned int n, ...);


Returns the sum of all arguments

If n == 0, returns 0

Task 1: Print numbers

File: 1-print_numbers.c

void print_numbers(const char *separator, const unsigned int n, ...);


Prints numbers separated by separator

Prints a new line at the end

If separator is NULL, it is not printed

Task 2: Print strings

File: 2-print_strings.c

void print_strings(const char *separator, const unsigned int n, ...);


Prints strings separated by separator

If a string is NULL, prints (nil)

Prints a new line at the end

Task 3: Print anything

File: 3-print_all.c

void print_all(const char * const format, ...);


Supported format specifiers:

c → char

i → int

f → float

s → string

If a string is NULL, prints (nil)

Ignores unknown format specifiers

Prints a new line at the end

### Compilation Examples
Task 0
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-sum_them_all.c -o a

Task 1
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-print_numbers.c -o b

Task 2
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-print_strings.c -o c

Task 3
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-print_all.c -o d

# Key Concepts Used

Variadic functions

Argument promotion (char → int, float → double)

Defensive programming (handling NULL)

Clean and readable C code

Proper memory and argument handling

## WinMingle Community Rules

All solutions are my own work

Copying or publishing solutions is forbidden

Plagiarism leads to removal from the program

### Author

Habila Geoffrey
WinMingle Software Engineering Program


