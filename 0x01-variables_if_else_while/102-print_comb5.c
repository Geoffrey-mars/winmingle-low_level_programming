/**
 * Author: Habila Makroghop Geoffrey
 * Program: WinMingle Community C Training
 * Description: Learning about how numbers and how to 
 * Print all possible combinations of two two-digit numbers.
 */


#include <stdio.h>

int main(void)
{
int digit_1 = 0;
int digit_2;

while (digit_1 <= 98)
{
    digit_2 = digit_1 + 1;

    while (digit_2 <= 99)
    {
        putchar((digit_1 / 10) + '0');
        putchar((digit_1 % 10) + '0');
        putchar(' ');
        putchar((digit_2 / 10) + '0');
        putchar((digit_2 % 10) + '0');


   if(digit_1 != 98 || digit_2 != 99)
   {
       putchar(',');
       putchar(' ');

   } 

   digit_2++;

    }

    digit_1++;
}
putchar('\n');
return (0);

}

