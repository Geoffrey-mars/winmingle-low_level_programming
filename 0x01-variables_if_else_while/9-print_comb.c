 /**
 * Author: Your Full Name
 * Program: WinMingle Community C Training
 * Description: Brief description of this file
 */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    //Declararing and assigning variable
    int sDigits = 0;

    //creating the loop
  
    while (sDigits <= 9)
    {
        putchar(sDigits + '0');
        
        if (sDigits != 9)
        {
            putchar (',');
            putchar (' ');
        
        }

            sDigits ++;
    }

    //printing a new line
    putchar('\n');
    return (0);
}
