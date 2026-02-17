#include <stdlib.h>   /* for free() */
#include "dog.h"      /* for struct dog */

void free_dog(dog_t *d)
{
    if (!d)
        return;

    free(d->name);
    free(d->owner);
    free(d);
}

