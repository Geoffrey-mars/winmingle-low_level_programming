#include "dog.h"    /* Tells compiler what struct dog is */
#include <stddef.h>  /* For NULL */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name; /* accessing the struct values dog name, age and its owner */
        d->age = age;
        d->owner = owner;
    }
}

