 /**
 * Author: Habila Makroghop Geoffrey
 * Program: WinMingle Community C Training
 * Description: Learning how to print the combination of Numberrs
 *
 */
 
#include <stdio.h>

int main(void)
{
    int fDigit = 0;

    int sDigit;

    while (fDigit <= 8)
    {
        sDigit = 0;

    while (sDigit <= 9)
    {
        putchar(fDigit + '0');
        putchar(sDigit + '0');

    if (fDigit != 8 || sDigit != 9)
    {
        putchar(',');
        putchar(' ');
    }
    sDigit++;
    
    }
    fDigit++;
    }

    putchar('\n');
    return (0);
}


