#include "main.h"
#include <stdio.h>

/*Writing a program that will print lowercase characters ten time and end with a new line
 *
 *
 * The Program return 0 to signifies success
 */

void print_alphabet_x10(void)
{
    int r;

   char  letters;

   for (r = 0; r < 10; r++) /*This count the number of time lowercase characters are to be printed */

       {
           letters = 'a';

           while (letters <= 'z')
           {
               _putchar(letters);
               letters++;
           }

           _putchar('\n');
       }

}
