# Pointers, Arrays & Strings

## Learning Objectives

By the end of this project, you will be able to confidently explain and demonstrate:

- What pointers are and how to use them
- What arrays are and how to use them
- The differences between pointers and arrays
- How to use and manipulate strings
- The scope of variables in C programming

---

## Project Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All files must compile on **Ubuntu 20.04 LTS** using the following command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89

- All source files must end with a new line.
- Include a `README.md` file at the root of the project.
- No global variables allowed.
- No more than 5 functions per file.
- Standard library functions such as `printf`, `puts`, etc., are **not allowed**.
- Allowed to use `_putchar` for output.
- All function prototypes and `_putchar` prototype must be declared in a header file named `main.h`.
- Include `main.h` in all source files.
- Do **not** push `_putchar.c` (the provided `_putchar` implementation will be used).

---

## Repository

- GitHub repository: `winmingle-low_level_programming`
- Directory for this project: `0x06-pointers_arrays_strings`

---

## Tasks Overview

### 0. strcat
- **File:** `0-strcat.c`
- **Description:** Write a function that concatenates two strings by appending `src` to `dest`.
- **Prototype:** `char *_strcat(char *dest, char *src);`
- **Behavior:** Overwrites the null terminator of `dest` and returns a pointer to `dest`.

### 1. strncat
- **File:** `1-strncat.c`
- **Description:** Concatenate two strings, but use at most `n` bytes from `src`.
- **Prototype:** `char *_strncat(char *dest, char *src, int n);`

### 2. strncpy
- **File:** `2-strncpy.c`
- **Description:** Copy a string, copying at most `n` bytes.
- **Prototype:** `char *_strncpy(char *dest, char *src, int n);`

### 3. strcmp
- **File:** `3-strcmp.c`
- **Description:** Compare two strings.
- **Prototype:** `int _strcmp(char *s1, char *s2);`

### 4. reverse_array
- **File:** `4-rev_array.c`
- **Description:** Reverse the contents of an array of integers.
- **Prototype:** `void reverse_array(int *a, int n);`

### 5. string_toupper
- **File:** `5-string_toupper.c`
- **Description:** Change all lowercase letters of a string to uppercase.
- **Prototype:** `char *string_toupper(char *);`

### 6. cap_string
- **File:** `6-cap_string.c`
- **Description:** Capitalize all words of a string.
- **Prototype:** `char *cap_string(char *);`

### 7. leet
- **File:** `7-leet.c`
- **Description:** Encode a string into 1337 (leet speak).
- **Prototype:** `char *leet(char *);`

### 8. rot13
- **File:** `100-rot13.c`
- **Description:** Encode a string using ROT13 cipher.
- **Prototype:** `char *rot13(char *);`

### 9. print_number
- **File:** `101-print_number.c`
- **Description:** Print an integer using only `_putchar`.
- **Prototype:** `void print_number(int n);`

---

## Compilation and Testing

To compile the files, use the following command on Ubuntu 20.04 LTS:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file_name>.c -o <output_name>

