#include <stdio.h>

int main(void)
{
    int i;
    long int f1_high = 0, f1_low = 1;   /* First Fibonacci = 1 */
    long int f2_high = 0, f2_low = 2;   /* Second Fibonacci = 2 */
    long int next_high, next_low;

    /* Print the first two Fibonacci numbers */
    printf("%ld, %ld", f1_low, f2_low);

    for (i = 3; i <= 98; i++)
    {
        /* Add low parts and handle carry */
        next_low = f1_low + f2_low;
        next_high = f1_high + f2_high;

        if (next_low >= 1000000000)   /* Carry for 9-digit low part */
        {
            next_high += 1;
            next_low -= 1000000000;
        }

        /* Print the next Fibonacci number with proper formatting */
        if (next_high == 0)
            printf(", %ld", next_low);
        else
            printf(", %ld%09ld", next_high, next_low);

        /* Shift f1 and f2 for next iteration */
        f1_high = f2_high;
        f1_low = f2_low;
        f2_high = next_high;
        f2_low = next_low;
    }

    printf("\n"); /* Newline at the end */
    return 0;
}

