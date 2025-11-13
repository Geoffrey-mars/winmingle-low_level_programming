 /**
 * Author: Habila Makroghop Geoffrey; 
 * Program: WinMingle Community C Training;
 * Description: Just learning how to print all alphabets except some alphabets;
 */

#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
    char aLa = 'a';

    while (aLa <= 'z')
       {
           if (aLa == 'q' || aLa == 'e')
               putchar(aLa - 32);

           else 
               putchar(aLa);
           aLa++;
       }

    putchar('\n');
    return (0);



}


