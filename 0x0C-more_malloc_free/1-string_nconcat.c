#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: pointer to new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int i, j, len1 = 0, len2 = 0;

    /* Treat NULL as empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Find length of s1 */
    while (s1[len1])
        len1++;

    /* Find length of s2 */
    while (s2[len2])
        len2++;

    /* Use only n characters from s2 */
    if (n < len2)
        len2 = n;

    /* Allocate memory */
    new_str = malloc(sizeof(char) * (len1 + len2 + 1));
    if (new_str == NULL)
        return (NULL);

    /* Copy s1 */
    for (i = 0; i < len1; i++)
        new_str[i] = s1[i];

    /* Copy first n characters of s2 */
    for (j = 0; j < len2; j++)
        new_str[i + j] = s2[j];

    /* Null terminate */
    new_str[i + j] = '\0';

    return (new_str);
}

