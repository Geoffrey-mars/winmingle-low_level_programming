#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')  /* loop until end of string */
    {
        _putchar(str[i]);   /* print one character */
        i++;
    }

    _putchar('\n');         /* print newline */
}


