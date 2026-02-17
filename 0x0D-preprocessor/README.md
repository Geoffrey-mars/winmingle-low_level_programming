# 0x0D. C Preprocessor

📌 Project Description

This project is part of the WinMingle Community Software Engineering Program. It introduces the C preprocessor, focusing on how macros work, how they are defined and used, and how header files are properly protected.

By completing this project, I learned how the C preprocessor runs before compilation and performs text substitution using macros.

🎯 Learning Objectives

By the end of this project, I  am expect to confidently explain without goggling:

1. What macros are and how they work in C

2. The difference between object-like macros and function-like macros

3. Common predefined macros such as __FILE__, __LINE__, __DATE__, and __TIME__

4. How to properly protect header files using include guards

5. Common macro pitfalls such as missing parentheses and unwanted side effects

🛠️ Requirements

Allowed editors: vi, vim, emacs

Compilation environment: Ubuntu 20.04 LTS

Compiler and flags:

# gcc -Wall -Werror -Wextra -pedantic -std=gnu89

All files must end with a new line

No global variables allowed

No more than 5 functions per file

Allowed C standard library functions: malloc, free, exit

Forbidden functions: printf, puts, calloc, realloc, etc. (except where explicitly allowed)

_putchar is allowed (do not push _putchar.c)

All header files must include include guards

# Project Structure

## 0x0D-preprocessor/

- 0-object_like_macro.h
- 1-pi.h
- 2-main.c
- 3-function_like_macro.h
- 4-sum.h
- README.md

# File Descriptions

## 0-object_like_macro.h

Defines an object-like macro named SIZE with a value of 1024.

## 1-pi.h

Defines an object-like macro named PI with the value 3.14159265359.

## 2-main.c

A program that prints the name of the source file it was compiled from using the predefined macro __FILE__.

## 3-function_like_macro.h

Defines a function-like macro ABS(x) that computes the absolute value of a number.

## 4-sum.h

Defines a function-like macro SUM(x, y) that computes the sum of two numbers.

 ## Key Concepts Learned

Macros are processed before compilation and do not occupy memory

Macros perform text replacement, not computation

Function-like macros can be dangerous if arguments have side effects

Parentheses are essential in macros to avoid precedence issues

Include guards prevent multiple inclusions of header files

<!-- 
Author:Habila Geoffrey
Instructor: GREENFIELD ADOLPHUS
Course: WinMingle Community Software Engineering Program

-->
