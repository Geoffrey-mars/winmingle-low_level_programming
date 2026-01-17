#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
    int i = 0, j;
    char letters[] = "aAeEoOtTlL";
    char numbers[] = "4433007711";

    while (s[i] != '\0')
    {
        for (j = 0; letters[j] != '\0'; j++)
        {
            if (s[i] == letters[j])
            {
                s[i] = numbers[j];
                break;
            }
        }
        i++;
    }

    return s;
}

