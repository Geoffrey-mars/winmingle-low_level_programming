 /**
 * Author: Habila Makroghop Geoffrey;
 * Program: WinMingle Community C Training
 * Description: Learning how to print combination of three digit using putchar();
 */


#include <stdio.h>

int main(void)
{
    int f_num = 0;
    int s_num;
    int t_num;

    while (f_num <= 9)
    {
        s_num = 0;

     while (s_num <= 9)
     {
         t_num = 0;

         while (t_num <= 9)
         {
             putchar(f_num + '0');
             putchar(s_num + '0');
             putchar(t_num + '0');


     if(!(f_num == 9 && s_num == 9 && t_num == 9))
     {
         putchar(',');
         putchar(' ');
     }

     t_num++;

         }
      s_num++;
     }
     f_num++;
    }

   putchar('\n');
   return (0);
}

