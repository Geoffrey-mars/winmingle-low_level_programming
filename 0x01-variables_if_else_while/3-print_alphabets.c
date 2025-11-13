 /**
 * Author: Habila Makroghop Geoffrey;
 * Program: WinMingle Community C Training
 * Description: Learning how to print
 * the alphABET in lowercase, then uppercase, followed by a new line
 */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char Al = 'a';
    char aL = 'A';

    while (Al <= 'z')
    {
        putchar(Al);
        Al++;
    }


    while (aL <= 'Z')
    {
        putchar(aL);
        aL++;
    }

    putchar('\n');
    return (0);
}

