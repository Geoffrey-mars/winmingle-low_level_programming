#include "main.h"

/* Prints string encoded in ROT13 */
int print_rot13(char *s)
{
    int i;
    int count;
    char c;

    if (!s)
        s = "(null)";

    count = 0;

    for (i = 0; s[i]; i++)
    {
        c = s[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
                c += 13;
            else
                c -= 13;
        }
        count += print_char(c);
    }

    return count;
}

