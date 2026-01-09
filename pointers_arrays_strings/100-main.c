#include <stdio.h>
#include "main.h"

int main(void)
{
    char *examples[] = {
        "98",
        "-402",
        "--98",
        "214748364",
        "words",
        "+402",
        "98abc",
        "   402"
    };
    int i;
    int n;

    for (i = 0; i < 8; i++)
    {
        n = _atoi(examples[i]);
        printf("%d\n", n);
    }

    return 0;
}

