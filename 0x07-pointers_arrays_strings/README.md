# 0x07. Pointers, Arrays & Strings (Advanced)

## WinMingle Software Engineering Training

### Project Overview
This project focuses on:
- Pointers to pointers
- Multidimensional arrays
- Common string-manipulation patterns (re-implemented)
- Variable scope for arrays and pointers

By the end of this project, you will be able to explain and implement pointer manipulation, array handling, and custom string functions in C **without using the standard library**.

---

## Learning Objectives

At the end of this project, you are expected to be able to:

1. Explain what **pointers to pointers** are and how to use them.
2. Understand how **multidimensional arrays** are stored and accessed.
3. Implement common **string manipulation functions** without standard library functions.
4. Understand **variable scope** for arrays and pointers.

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`.
- All files compiled on **Ubuntu 20.04 LTS** using:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89


- All files must end with a newline.
- **No global variables** allowed.
- **No more than 5 functions per file**.
- **Do not use standard library printing functions** in your functions (allowed only in `main.c` for testing).
- You are allowed to use `_putchar` (we provide `_putchar.c` during grading).
- Function prototypes must be in **`main.h`**.
- Push header and source files to the repository.
- Do not publish project content externally — plagiarism policy applies.

---

## Repository Structure

winmingle-low_level_programming/
└── 0x07-pointers_arrays_strings/
├── 0-memset.c
├── 1-memcpy.c
├── 2-strchr.c
├── 3-strspn.c
├── 4-strpbrk.c
├── 5-strstr.c
├── 6-print_chessboard.c
├── 7-print_diagsums.c
├── 8-set_string.c
├── main.h
└── README.md

---

## Tasks

### Task 0 — `_memset`
Fill memory with a constant byte.  

**Prototype:**
```c
char *_memset(char *s, char b, unsigned int n);
Task 1 — _memcpy
Copy memory area.

Prototype:

char *_memcpy(char *dest, char *src, unsigned int n);
Task 2 — _strchr
Locate first occurrence of a character in a string.

Prototype:


Copy code
char *_strchr(char *s, char c);
Task 3 — _strspn
Return length of initial segment of s consisting only of bytes from accept.

Prototype:

unsigned int _strspn(char *s, char *accept);
Task 4 — _strpbrk
Locate first occurrence in s of any bytes in accept.

Prototype:

char *_strpbrk(char *s, char *accept);
Task 5 — _strstr
Locate substring needle in haystack.

Prototype:


char *_strstr(char *haystack, char *needle);
Task 6 — print_chessboard
Print an 8x8 chessboard.

Prototype:

void print_chessboard(char (*a)[8]);
Task 7 — print_diagsums
Print sums of the two diagonals of a square matrix.

Prototype:

void print_diagsums(int *a, int size);
Task 8 — set_string
Set the value of a pointer to a char (double pointer).

Prototype:


void set_string(char **s, char *to);
Provided Function


int _putchar(char c);
Used for printing characters when standard library functions are not allowed.

Compilation Example
To compile Task 0 for testing:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-memset.c -o 0-memset
./0-memset

Replace 0-main.c with your test file and task source file accordingly.

Author
Your Name: Makroghop Geoffrey
GitHub Repository: winmingle-low_level_programming
Instructor: GREENFIELD Adophilus



