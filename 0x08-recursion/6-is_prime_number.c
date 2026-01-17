#include "main.h"

int prime_helper(int n, int divisor);

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return 0;

    return prime_helper(n, 2);
}

/**
 * prime_helper - helper function to check divisibility
 * @n: number
 * @divisor: current divisor
 * Return: 1 if prime, 0 otherwise
 */
int prime_helper(int n, int divisor)
{
    if (divisor == n)
        return 1;  /* no divisors found */

    if (n % divisor == 0)
        return 0;  /* divisible → not prime */

    return prime_helper(n, divisor + 1);
}

