#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to beginning of substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    /* If needle is empty, return haystack */
    if (*needle == '\0')
        return (haystack);

    i = 0;
    while (haystack[i] != '\0')
    {
        j = 0;
        while (needle[j] != '\0' && haystack[i + j] == needle[j])
        {
            j++;
        }

        if (needle[j] == '\0')
            return (haystack + i);

        i++;
    }

    return (NULL);
}

