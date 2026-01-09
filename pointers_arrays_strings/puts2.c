#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);  /* print current character */
        i += 2;            /* skip one character */
    }

    _putchar('\n');        /* newline at the end */
}

