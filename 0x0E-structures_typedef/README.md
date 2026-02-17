# 0x0E. C - Structures, typedef

## Project Description

This project is part of the **WinMingle Software Engineering Program**.  
It focuses on **C structures and typedefs**, teaching how to define custom data types, create and manage dynamic memory for structs, and work safely with pointers.  

By the end of this project, I will be able to:  
- Define structures (`struct`) in C  
- Use `typedef` to create type aliases  
- Initialize and print structs  
- Dynamically create structs in memory  
- Free memory safely to prevent memory leaks  

---

## WinMingle Academic Integrity Rules

- All code must be written by me.  
- **Do not copy or paste** from others.  
- **Do not publish** this project publicly.  
- Plagiarism will result in **immediate removal** from the WinMingle program.  

---

## File Structure

| File | Description |
|------|-------------|
| `dog.h` | Header file: defines the `struct dog`, `dog_t` typedef, and function prototypes |
| `0-init_dog.c` | Initializes an existing `struct dog` with values |
| `2-print_dog.c` | Prints the values of a `struct dog` safely, handles `NULL` values |
| `4-new_dog.c` | Creates a new dog dynamically in memory, copying the strings |
| `5-free_dog.c` | Frees memory allocated for a dog created with `new_dog` |

---

## Function Overview

### 1. `init_dog(struct dog *d, char *name, float age, char *owner)`  
Initializes an existing dog struct with the given `name`, `age`, and `owner`.

### 2. `print_dog(struct dog *d)`  
Prints the values of a dog.  
- Prints `(nil)` if `name` or `owner` is `NULL`.  
- Does nothing if the dog pointer itself is `NULL`.

### 3. `dog_t *new_dog(char *name, float age, char *owner)`  
Creates a **new dog** in memory.  
- Allocates memory for the struct and for `name` and `owner` strings.  
- Returns `NULL` if allocation fails.

### 4. `free_dog(dog_t *d)`  
Frees all memory allocated for a dog created by `new_dog`.

---

## How to Compile and Run Locally

1. Open your terminal in the project directory.  

2. **Compile individual tasks** using `gcc`. Examples:

- Compile `0-init_dog.c`:

```bash code

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-init_dog.c -o init_dog
to run the file used:  ./init_dog 


compile 2-print_dog.c:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-print_dog.c -o print_dog
to run the file used: ./print_dog


Compile 4-new_dog.c and 5-free_dog.c together:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-main.c 4-new_dog.c 5-free_dog.c -o new_and_free_dog
to run the file used: ./new_and_free_dog


Note: Replace *-main.c with the test file you are using.

If using Valgrind to check memory leaks:

to run the file used: valgrind ./new_and_free_dog

**Notes & Tips**

Always include include guards in header files (#ifndef, #define, #endif).

When copying strings dynamically, always allocate strlen(string) + 1 bytes for the NULL terminator.

Free memory in reverse order: strings first, then the struct.


Author: Habila Geoffrey;
Course: Software Engineering 
Platform: Winmingle Community Software Engineering Program;
Instructor: GREENFIELD ADOLPHUS
