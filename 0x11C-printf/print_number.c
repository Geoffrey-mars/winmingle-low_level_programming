#include "main.h"

/* Prints a signed number */
int print_number(long n)
{
    int count;
    unsigned long num;

    count = 0;

    if (n < 0)
    {
        count += print_char('-');
        num = -n;
    }
    else
        num = n;

    if (num / 10)
        count += print_number(num / 10);

    count += print_char((num % 10) + '0');

    return count;
}

