#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings into heap memory
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
    char *concat;
    int len1 = 0, len2 = 0, i, j;

    /* handle NULLs as empty strings */
    if (s1 != NULL)
        while (s1[len1] != '\0')
            len1++;
    if (s2 != NULL)
        while (s2[len2] != '\0')
            len2++;

    /* allocate memory for new string (+1 for '\0') */
    concat = malloc(len1 + len2 + 1);
    if (concat == NULL)
        return (NULL);

    /* copy s1 into new string */
    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    /* copy s2 after s1 */
    for (j = 0; j < len2; j++)
        concat[i + j] = s2[j];

    concat[len1 + len2] = '\0'; /* null terminate */
    return (concat);
}
 
