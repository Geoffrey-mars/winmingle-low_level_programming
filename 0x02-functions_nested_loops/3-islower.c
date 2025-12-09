#include "main.h"

/**
 * _islower - checks if a character is lowercase
 *  the character to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')   /* check ASCII range for lowercase letters */
        return 1;
    else
        return 0;
}

