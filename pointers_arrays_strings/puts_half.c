#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
    int len = 0;
    int i;

    /* find string length */
    while (str[len] != '\0')
        len++;

    /* determine starting index */
    if (len % 2 == 0)
        i = len / 2;
    else
        i = (len + 1) / 2;

    /* print from the starting index to the end */
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n'); /* newline at the end */
}

