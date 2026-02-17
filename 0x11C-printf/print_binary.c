#include "main.h"

/* Prints an unsigned number in binary */
int print_binary(unsigned int n)
{
    int count = 0;

    if (n / 2)
        count += print_binary(n / 2);

    count += print_char((n % 2) + '0');

    return count;
}

