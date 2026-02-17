#include <stdio.h>    /* this make work for printf function */
#include "dog.h"      /* custom header file so compiler knows struct dog */
#include <stddef.h>   /* this make the compiller knows understands NULL */

void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

