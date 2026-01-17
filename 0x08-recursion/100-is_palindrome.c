#include "main.h"

int _strlen_recursion(char *s);
int palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);

    if (len == 0)
        return 1;

    return palindrome_helper(s, 0, len - 1);
}

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;

    return 1 + _strlen_recursion(s + 1);
}

/**
 * palindrome_helper - compares characters recursively
 * @s: string
 * @start: starting index
 * @end: ending index
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return palindrome_helper(s, start + 1, end - 1);
}

