 /*
 * Author: Habila Makroghop Geoffrey;
 * Program: WinMingle Community C Training
 * Description: learning about numbers of base 16 in lowercase
 */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    //decclaring variables
    int num = 0;
    char letters = 'a';

    //First Loop
    while (num <= 9)

    {
        putchar(num +'0');
        num ++;

    }

    //second Loop 

    while (letters <= 'f')
    {
        putchar(letters);
        letters ++;
    }
    putchar('\n');
    return (0);
}



