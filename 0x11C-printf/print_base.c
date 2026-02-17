#include "main.h"

/* Prints unsigned number in any base (8, 10, 16) */
int print_base(unsigned long n, int base, int uppercase)
{
    int count;
    char digits[16];
    char c;

    int i;

    count = 0;

    for (i = 0; i < 16; i++)
    {
        if (i < 10)
            digits[i] = i + '0';
        else
        {
            if (uppercase)
                digits[i] = i - 10 + 'A';
            else
                digits[i] = i - 10 + 'a';
        }
    }

    if (n / (unsigned long)base)
        count += print_base(n / (unsigned long)base, base, uppercase);

    c = digits[n % base];
    count += print_char(c);

    return count;
}

