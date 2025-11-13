/**
 * Author: Habila Makroghop Geoffrey;
 * Program: WinMingle Community C Training
 * Description: just learning about how to print an 
 * alphabet in lowercase, followed by a new line.
 */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char al = 'a';
    while (al <= 'z')
    {
        putchar(al);
        al++;
    }

    putchar('\n');
    return (0);


}
