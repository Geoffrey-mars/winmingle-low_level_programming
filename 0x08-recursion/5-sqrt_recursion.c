#include "main.h"

/* helper function declaration */
int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number
 * Return: square root of n, -1 if not natural
 */
int _sqrt_recursion(int n)
{
    if (n < 0)  /* negative number has no natural square root */
        return -1;

    return sqrt_helper(n, 1);  /* start guessing from 1 */
}

/**
 * sqrt_helper - recursively finds the natural square root
 * @n: number
 * @guess: current guess
 * Return: square root if found, -1 if not
 */
int sqrt_helper(int n, int guess)
{
    if (guess * guess == n)  /* found it */
        return guess;
    if (guess * guess > n)   /* overshot */
        return -1;

    return sqrt_helper(n, guess + 1);  /* try next guess */
}

