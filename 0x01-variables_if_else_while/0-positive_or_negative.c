 /**
 * Author: Habila Makroghop Geoffrey
 * Program: WinMingle Community C Training
 * Description: This file is about a program that assigns 
 * a random number to the variable n each time it runs and 
 * prints whether the number is positive, negative, or zero
 */


#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return (0);
}

