#include "main.h"
#include <stdio.h>

int main(void)
{
    char str[] = "My School";

    printf("%s\n", str);  // just for testing
    rev_string(str);
    printf("%s\n", str);

    return 0;
}

