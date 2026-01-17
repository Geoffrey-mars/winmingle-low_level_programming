#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
    int i = 0;
    int j;
    char separators[] = " \t\n\n,;.!?\"(){}";

    while (s[i] != '\0')
    {
        /* Capitalize first character */
        if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;

        /* Capitalize after a separator */
        for (j = 0; separators[j] != '\0'; j++)
        {
            if (s[i - 1] == separators[j] &&
                s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
                break;
            }
        }
        i++;
    }

    return s;
}

