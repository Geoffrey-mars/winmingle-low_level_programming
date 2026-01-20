#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/* Check if a string contains only digits */
int is_digit(char *s)
{
    int i = 0;

    while (s[i])
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

/* Get length of string */
int _strlen(char *s)
{
    int len = 0;

    while (s[len])
        len++;
    return (len);
}

/* Print Error and exit */
void error_exit(void)
{
    printf("Error\n");
    exit(98);
}

int main(int argc, char *argv[])
{
    char *num1, *num2;
    int len1, len2, len, i, j, carry, n1, n2;
    int *result;

    /* Check argument count */
    if (argc != 3)
        error_exit();

    num1 = argv[1];
    num2 = argv[2];

    /* Check digits */
    if (!is_digit(num1) || !is_digit(num2))
        error_exit();

    len1 = _strlen(num1);
    len2 = _strlen(num2);
    len = len1 + len2;

    result = malloc(sizeof(int) * len);
    if (!result)
        return (1);

    /* Initialize result array */
    for (i = 0; i < len; i++)
        result[i] = 0;

    /* Multiply */
    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = num1[i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            carry += result[i + j + 1] + (n1 * n2);
            result[i + j + 1] = carry % 10;
            carry /= 10;
        }
        result[i + j + 1] += carry;
    }

    /* Print result */
    i = 0;
    while (i < len && result[i] == 0)
        i++;

    if (i == len)
        _putchar('0');

    for (; i < len; i++)
        _putchar(result[i] + '0');

    _putchar('\n');

    free(result);
    return (0);
}

