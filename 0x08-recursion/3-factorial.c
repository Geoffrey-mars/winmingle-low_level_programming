#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: the number
 * Return: factorial of n, -1 if n < 0
 */
int factorial(int n)
{
    if (n < 0)   /* error case */
        return -1;
    if (n == 0)  /* base case */
        return 1;

    return n * factorial(n - 1); /* recursive step */
}

