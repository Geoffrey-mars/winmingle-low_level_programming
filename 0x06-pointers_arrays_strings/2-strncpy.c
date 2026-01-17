#include "main.h"

/**
 * _strncpy - copies a string using at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    /* Phase 1: copy from src */
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* Phase 2: fill remaining space with '\0' */
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

