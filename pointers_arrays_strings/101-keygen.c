#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int sum = 0;
    char c;

    srand(time(NULL));

    while (sum < 2772)
    {
        c = rand() % 94 + 33;

        if (sum + c > 2772)
            break;

        sum += c;
        putchar(c);

    }

   printf("%d\n", 2772 - sum);

    return (0);
}

