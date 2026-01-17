#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string (must have enough space)
 * @src: source string to append
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
    int i = 0;  /* index for dest */
    int j = 0;  /* index for src */

    /* Finding the end of dest string */
    while (dest[i] != '\0')
        i++;

    /* Copying src to the end of dest */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    /* Addng null terminator at the end */
    dest[i] = '\0';

    return dest;
}

