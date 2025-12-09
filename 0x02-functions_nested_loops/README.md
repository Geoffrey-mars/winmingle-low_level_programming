<!--
Author: Habila Geoffrey;
WinMingle Software Engineering Student;

 -->

# 0x02. C - Functions, Nested Loops

This project is part of the Winmingle Low Level Programming curriculum.  
It introduces **functions**, **function prototypes**, **variable scope**,  
and **nested loops** in the C programming language.

---

## 📘 Learning Objectives

By the end of this project, I am expected to understand:

### 🔹 Functions
- What a function is  
- How to create and use functions  
- The difference between a function **declaration (prototype)** and a **definition**

### 🔹 Nested loops
- What nested loops are  
- How loops can exist inside other loops  
- When and why nested loops are used

### 🔹 Variable scope
- Local vs global variables  
- Why global variables are forbidden in this project

### 🔹 Header files
- How to create header files  
- How to include them using `#include`  
- Why prototypes should be placed inside header files

### 🔹 GCC compilation flags
I must compile my code using: -Wall -Werror -Wextra -pedantic -std=gnu89


Meaning:
- `-Wall` → enable all warnings  
- `-Wextra` → enable extra warnings  
- `-Werror` → treat warnings as errors  
- `-pedantic` → enforce ISO C standards  
- `-std=gnu89` → use the GNU89 C standard  

---

## 📂 Project Structure

All files are in the directory:




The main header file required for this project is:
- main.h



This file contains the prototypes for all functions in the project and the prototype for `_putchar`.

---

## 🚫 Allowed / Not Allowed

### ✔ Allowed
- The `_putchar` function
- Up to 5 functions per file
- Editors: `vi`, `vim`, `emacs`

### ❌ Not allowed
- Use of standard library functions like `printf`, `puts`, `scanf`, etc
- Global variables
- More than 5 functions in a file
- Pushing the file `_putchar.c` (ALX will provide their own)

---

## 📝 Tasks Overview

### **Task 0:** Print `_putchar`  
A program that prints `_putchar` followed by a new line.
### compilation Command for Task 0 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar

### **Task 1:** Print alphabet  
A function that prints the lowercase alphabet followed by a new line.
### compilation command for Task 1 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet


### Task 2:** Print alphabet ten times
A function that prints 10 times the alphabet, in lowercase, followed by a new line. 
### compilation command for Task 2 is: 
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10

### Task 3:** Check for a lowercase character
A function that checks for lowercase character.
### compilation command for Task 3 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower

### Task 4:** Checks for alphabetic characters.
A function that checks for alphabetic characters.
### compilation Command for Task 4 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha

### Task 5:** Prints the sign of a number.
A function that prints the sign of a number.
### compilation command for Task 5 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign

### Task 6:** Computes the absolute value of an integer.
A function that computes the absolute value of an integer.
### compilation Command for task 6 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs

### Task 7:** Prints the last digit of a number.
A function that prints the last digit of a number.
### compilation command for Task 7 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit

### Task 8:** Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
### Compilation command for Task 8 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24

### Task 9:** Prints the 9 times table, starting with 0.
A function that prints the 9 times table, starting with 0.
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table

### Task 10:**Adds two integers and returns the result.
A function that adds two integers and returns the result.
### Compilation Command for Task 10 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add

### Task 11:** Prints all natural numbers from n to 98, followed by a new line.
A function that prints all natural numbers from n to 98, followed by a new line.
### Compilation command for Task 11 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98

### Task 12:** Prints the n times table, starting with 0.
A function that prints the n times table, starting with 0.
### Compilation Command for Task 12 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table

### Task 13:** Computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
A program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
### Compilation Command for Task 13 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-natural.c -o 101-natural

### Task 14:**Prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
A program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
### Compilation Command for Task 14 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 102-main.c 102-fibonacci.c -o 102-fibonacci

### Task 14:*** Write a program that finds and prints the sum of the even-valued terms, followed by a new line.
A program that finds and prints the sum of the even-valued terms, followed by a new line.
### Compilation Command for Task 15 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 103-main.c 103-fibonacci.c -o 103-fibonacci.c

### Task 15:** Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
A program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
### Compilation Command for Task 16 is:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 104-main.c 104-fibonacci.c -o 104-fibonacci

