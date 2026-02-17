# 0x0F. C - Function pointers


## Learning Objectives

- Understand what **function pointers** are and how to use them.
- Know what a function pointer **holds**.
- Know where a function pointer **points to in memory**.

---

## General Rules

- Use `vi`, `vim`, or `emacs`.
- Compile on Ubuntu 20.04 LTS:
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89

## TASK 

0	Print a name using a function pointer	                    0-print_name.c
1	Apply a function to each element of an array	            1-array_iterator.c
2	Search an array for an integer using a function pointer	    2-int_index.c
3	Calculator using function pointers	                        3-calc.h, 3-op_functions.c, 3-get_op_func.c, 3-main.c
4	Print opcodes of your main function	                        100-main_opcodes.c


## How to Compile & Run
### Task 0
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
./a

Task 1
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
./b

Task 2
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
./c

Task 3 (Calculator)
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc

./calc 1 + 1 #output: 2

./calc 97 + 1  # output 98
./calc 1024 / 10 # output 102
./calc 1024 '*' 98 # output 100352
./calc 1024 '\*' 98 # output Error
./calc 1024 - 98 # output 926
./calc 1024 '%' 98 # output 44


Task 4 (Opcodes)
gcc -std=gnu89 100-main_opcodes.c -o main
./main 21        # Prints first 21 bytes of main function in hex

objdump -d -j.text -M intel main


## REPO
GitHub repository: winmingle-low_level_programming


Directory: 0x0F-function_pointers

## Submission & Repository structure (recommended)
Place files under:
winmingle-low_level_programming/
└─ 0x0F-function_pointers/
   ├─ 0-print_name.c
   ├─ 1-array_iterator.c
   ├─ 2-int_index.c
   ├─ 3-calc.h
   ├─ 3-op_functions.c
   ├─ 3-get_op_func.c
   ├─ 3-main.c (optional example main — we might use our own at evaluation)
   ├─ 100-main_opcodes.c
   └─ function_pointers.h

-----------------------------------------------------------
Author:         Geoffrey Habila
Instructor:     GREENFIELD ADOLPHUS
Department:     Winmingle Software Engineering Program.

-----------------------------------------------------------
