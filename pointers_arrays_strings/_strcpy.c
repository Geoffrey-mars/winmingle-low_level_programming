#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i]; /* copy character */
        i++;
    }

    dest[i] = '\0'; /* add null terminator */

    return dest;
}

