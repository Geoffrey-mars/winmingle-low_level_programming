#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string into heap memory
 * @str: string to duplicate
 *
 * Return: pointer to new string or NULL on failure
 */
char *_strdup(char *str)
{
    char *copy;
    int i, len;

    if (str == NULL)
        return (NULL);

    /* find length of str */
    for (len = 0; str[len] != '\0'; len++)
        ;

    /* allocate memory for copy (+1 for null terminator) */
    copy = malloc(len + 1);
    if (copy == NULL)
        return (NULL);

    /* copy each character */
    for (i = 0; i < len; i++)
        copy[i] = str[i];

    copy[len] = '\0'; /* null-terminate the new string */

    return (copy);
}

