#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to old memory
 * @old_size: size of old memory in bytes
 * @new_size: size of new memory in bytes
 *
 * Return: pointer to new memory, NULL if failed or new_size is 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int i;
    char *old_data, *new_data;

    /* If new size is same as old, just return ptr */
    if (new_size == old_size)
        return ptr;

    /* If ptr is NULL, realloc behaves like malloc */
    if (!ptr)
        return malloc(new_size);

    /* If new_size is 0 and ptr is not NULL, free memory and return NULL */
    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    /* Allocate new block */
    new_ptr = malloc(new_size);
    if (!new_ptr)
        return NULL;

    /* Copy old data to new block (up to the smaller of old/new size) */
    old_data = ptr;
    new_data = new_ptr;
    for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
        new_data[i] = old_data[i];

    /* Free old block */
    free(ptr);

    return new_ptr;
}

