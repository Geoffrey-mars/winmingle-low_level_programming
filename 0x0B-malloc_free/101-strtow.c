#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts number of words in a string
 * @str: input string
 * Return: number of words
 */
int count_words(char *str)
{
    int i = 0, words = 0;

    while (str[i])
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            words++;
        i++;
    }
    return (words);
}

/**
 * strtow - splits a string into words
 * @str: input string
 * Return: pointer to array of words, or NULL
 */
char **strtow(char *str)
{
    char **words;
    int i = 0, j = 0, k, w, len;

    if (str == NULL || *str == '\0')
        return (NULL);

    w = count_words(str);
    if (w == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (w + 1));
    if (words == NULL)
        return (NULL);

    while (str[i] && j < w)
    {
        while (str[i] == ' ')
            i++;

        len = 0;
        while (str[i + len] && str[i + len] != ' ')
            len++;

        words[j] = malloc(sizeof(char) * (len + 1));
        if (words[j] == NULL)
        {
            while (j > 0)
                free(words[--j]);
            free(words);
            return (NULL);
        }

        for (k = 0; k < len; k++)
            words[j][k] = str[i++];

        words[j][k] = '\0';
        j++;
    }

    words[j] = NULL;
    return (words);
}

