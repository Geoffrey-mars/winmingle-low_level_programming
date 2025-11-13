 /**
 * Author: Habila Makroghop Geoffrey;
 * Program: WinMingle Community C Training
 * Description: Still learning how to use Numbers in C Language;
 */

#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
    int newNum = 0;

   while (newNum <= 9)
   {
       putchar(newNum + '0');
       newNum++;
   } 

   putchar('\n');
   return (0);
}
