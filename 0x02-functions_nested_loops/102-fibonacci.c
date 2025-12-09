#include <stdio.h>

int main(void)
{
    long int first = 1, second = 2, next;
    int i;

    /* Print the first number */
    printf("%ld", first);

    /* Loop from 2 to 50 (remaining numbers) */
    for (i = 2; i <= 50; i++)
    {
        printf(", %ld", second);  /* Print current number */
        next = first + second;     /* Compute next Fibonacci number */
        first = second;            /* Update first */
        second = next;             /* Update second */
    }

    printf("\n"); /* Newline at the end */
    return 0;
}

