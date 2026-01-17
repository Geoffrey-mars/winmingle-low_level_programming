# 0x09. C – Static Libraries

## 📌 Project Description
This project introduces static libraries in C.  
A static library is a collection of object files that are linked into a program at compile time.

Students learn how to create, manage, and use static libraries using Unix tools.

---

## 🎯 Learning Objectives
By the end of this project, you should be able to explain:
- What a static library is
- How static libraries work
- How to create a static library
- How to use a static library in C
- Basic usage of:
  - ar
  - ranlib
  - nm

---

## 🛠 Tools & Requirements
- OS: Ubuntu 20.04 LTS
- Compiler: gcc
- Flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Editors: vi, vim, emacs
- No standard C library functions allowed
- `_putchar` is allowed (but not pushed)

---

## 📂 Files
| File | Description |
|-----|-------------|
| `main.h` | Header file containing all function prototypes |
| `libmy.a` | Static library containing custom C functions |
| `create_static_lib.sh` | Script to compile and archive object files |

---

## ⚙️ Compilation & Usage

### Create the static library
```bash
ar rcs libmy.a *.o

gcc main.c -L. -lmy -o program
