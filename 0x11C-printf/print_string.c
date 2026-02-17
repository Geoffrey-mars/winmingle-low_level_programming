#include "main.h"

/* Prints a string */
int print_string(char *s)
{
    int i;
    int count;

    if (!s)
        s = "(null)";

    count = 0;
    for (i = 0; s[i]; i++)
        count += print_char(s[i]);

    return count;
}

