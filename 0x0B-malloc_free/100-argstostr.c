#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments into one string
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
    int i, j, k = 0;
    int total_len = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate total length */
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j])
        {
            total_len++;
            j++;
        }
        total_len++; /* for '\n' */
    }

    total_len++; /* for '\0' */

    str = malloc(sizeof(char) * total_len);
    if (str == NULL)
        return (NULL);

    /* Copy arguments */
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j])
        {
            str[k++] = av[i][j++];
        }
        str[k++] = '\n';
    }

    str[k] = '\0';

    return (str);
}

