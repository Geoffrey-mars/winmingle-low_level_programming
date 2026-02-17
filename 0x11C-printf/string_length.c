#include "main.h"

/* Returns length of string */
int string_length(char *s)
{
    int len;

    len = 0;
    if (!s)
        return 0;

    while (s[len])
        len++;

    return len;
}

