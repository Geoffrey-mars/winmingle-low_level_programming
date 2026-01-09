#include "main.h"

/* This function just swasp the value of a in the address of a to the address of b and vice versa
 * for example if  int a = 98;  int b = 42; now the value will now be a = 42; and b = 98;

 * */ 


void swap_int(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}


