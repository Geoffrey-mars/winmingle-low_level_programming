#include "main.h"

/* Prints string in reverse */
int print_reverse(char *s)
{
    int len;
    int i;
    int count;

    if (!s)
        s = "(null)";

    len = string_length(s);
    count = 0;

    for (i = len - 1; i >= 0; i--)
        count += print_char(s[i]);

    return count;
}

