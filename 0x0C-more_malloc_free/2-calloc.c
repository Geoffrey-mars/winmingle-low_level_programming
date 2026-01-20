#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    char *ptr;
    unsigned int total_size;

    /* If nmemb or size is 0, return NULL */
    if (nmemb == 0 || size == 0)
        return (NULL);

    total_size = nmemb * size;

    ptr = malloc(total_size);
    if (ptr == NULL)
        return (NULL);

    /* Set memory to zero */
    for (i = 0; i < total_size; i++)
        ptr[i] = 0;

    return (ptr);
}

