#include <stdlib.h>   /* For malloc and free */
#include <string.h>   /* For strdup */
#include "lists.h"    /* Our struct definition */

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to pointer of the first node
 * @str: string to store in the new node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;          /* This will hold our new node */
    unsigned int len = 0; /* To calculate string length */

    /* If the string is NULL, we cannot continue */
    if (str == NULL)
        return (NULL);

    /* Allocate memory for the new node */
    new = malloc(sizeof(list_t));

    /* If malloc fails, stop */
    if (new == NULL)
        return (NULL);

    /* Duplicate the string and store it in the node */
    new->str = strdup(str);

    /* If strdup fails, free allocated node and stop */
    if (new->str == NULL)
    {
        free(new);
        return (NULL);
    }

    /* Manually calculate length of the string */
    while (str[len])
        len++;

    /* Store length inside the node */
    new->len = len;

    /* Make the new node point to the old first node */
    new->next = *head;

    /* Update head to point to the new node */
    *head = new;

    /* Return address of the new node */
    return (new);
}
