#include <stdio.h>

int main(void)
{
    long int first = 1, second = 2, next;
    long int sum = 0;

    while (second <= 4000000)
    {
        if (second % 2 == 0)
        {
            sum += second;
        }

        next = first + second;  /* generate next Fibonacci number */
        first = second;         /* shift */
        second = next;          /* move to next */
    }

    printf("%ld\n", sum);
    return 0;
}

