#include "main.h"
#include <stdio.h>

int main(void)
{
    char str1[100];
    char str2[] = "First, solve the problem. Then, write the code";

    _strcpy(str1, str2);

    printf("%s\n", str2);
    printf("%s\n", str1);

    return 0;
}

