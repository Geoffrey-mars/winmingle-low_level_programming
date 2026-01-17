#include "main.h"

/**
 * wildcmp - compares two strings with wildcard support
 * @s1: first string
 * @s2: second string (may contain '*')
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    /* both strings ended */
    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    /* wildcard '*' */
    if (*s2 == '*')
    {
        /* skip multiple '*' */
        if (*(s2 + 1) == '*')
            return wildcmp(s1, s2 + 1);

        /* '*' matches empty OR one character */
        if (*s1 != '\0' && wildcmp(s1 + 1, s2))
            return 1;

        return wildcmp(s1, s2 + 1);
    }

    /* characters match */
    if (*s1 == *s2)
        return wildcmp(s1 + 1, s2 + 1);

    /* no match */
    return 0;
}

