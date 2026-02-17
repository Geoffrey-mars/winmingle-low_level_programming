# Custom _printf

<!-- 
Author: Habila Makroghop Geoffrey;
Department: Minwingle Software Engineering Program
Instructor: GREENFIELD ADOLPHUS

-->

## Description

This project is a custom implementation of the standard C `printf` function.
It supports basic format specifiers from Task 0 to Task 14 and is fully
C90 compliant.

The function handles formatted output using variadic arguments.

---

## Supported Format Specifiers

| Specifier | Description |
|-----------|------------|
| %c | Character |
| %s | String |
| %d | Signed integer |
| %i | Signed integer |
| %u | Unsigned integer |
| %o | Octal |
| %x | Hexadecimal (lowercase) |
| %X | Hexadecimal (uppercase) |
| %p | Pointer address |
| %% | Percent sign |
| %b | Binary |
| %r | Reverse string |
| %R | ROT13 encoded string |

---

## how to Compile this project
 Run this bash code 

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format \
_printf.c print_char.c print_string.c print_number.c \
print_base.c print_binary.c print_reverse.c \
print_rot13.c string_length.c main.c -o myprintf

