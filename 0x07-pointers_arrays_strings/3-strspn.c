#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string containing accepted characters
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    unsigned int count;

    count = 0;
    i = 0;

    while (s[i] != '\0')
    {
        j = 0;
        while (accept[j] != '\0')
        {
            if (s[i] == accept[j])
            {
                count++;
                break;
            }
            j++;
        }

        /* if we reached end of accept without a match */
        if (accept[j] == '\0')
            break;

        i++;
    }

    return (count);
}

