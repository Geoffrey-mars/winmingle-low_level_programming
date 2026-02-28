<!--
Author:     Habila Makroghop Geoffrey;
Instructor: Greenfeild Adolphus
Department: Winmingle Software Engineering Program
-->

# 0x13. C - More Singly Linked Lists
Project Overview

This project focuses on singly linked lists in C. I will implement operations like insertion, deletion, traversal, and loop detection, strengthening your understanding of pointers, memory management, and linked list algorithms.

## Learning Objectives

By completing this project, I will be able to:

Use and manipulate singly linked lists in C.

Understand how pointers and memory interact in linked lists.

Detect and handle loops safely.

Write clean, efficient, and plagiarism-free code.

### Data Structure
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
Project Requirements

### Allowed editors: vi, vim, emacs.

Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89.

No global variables.

Max 5 functions per file.

Only allowed standard library functions: malloc, free, exit.

_putchar allowed.

Include guards in header files.

All files end with a new line.

### Tasks & Functions

Task	|Function	                    |Description	                            |File
0	    |print_listint	                |Prints all nodes and returns count	        |0-print_listint.c
1	    |listint_len	                |Returns number of nodes	                |1-listint_len.c
2	    |add_nodeint	                |Adds node at the beginning	                |2-add_nodeint.c
3	    |add_nodeint_end	            |Adds node at the end	                    |3-add_nodeint_end.c
4	    |free_listint	                |Frees all nodes	                        |4-free_listint.c
5	    |free_listint2	                |Frees list and sets head to NULL	        |5-free_listint2.c
6	    |pop_listint	                |Deletes head node and returns its data	    |6-pop_listint.c
7	    |get_nodeint_at_index	        |Returns nth node	                        |7-get_nodeint.c
8	    |sum_listint	                |Returns sum of all nodes	                |8-sum_listint.c
9	    |insert_nodeint_at_index	    |Inserts node at index	                    |9-insert_nodeint.c
10	    |delete_nodeint_at_index	    |Deletes node at index	                    |10-delete_nodeint.c
11	    |reverse_listint	            |Reverses the linked list	                |100-reverse_listint.c
12	    |print_listint_safe	            |Prints lists safely with loops	            |101-print_listint_safe.c
13	    |free_listint_safe	            |Frees lists safely with loops	            |102-free_listint_safe.c
14	    |find_listint_loop	            |Finds the start of a loop	                |103-find_loop.c



