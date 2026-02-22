#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to pointer of first node
 * @str: string to store in new node
 *
 * Return: address of new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new;
    list_t *current;
    unsigned int len = 0;

    if (str == NULL)
        return (NULL);

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);
    if (new->str == NULL)
    {
        free(new);
        return (NULL);
    }

    while (str[len])
        len++;

    new->len = len;
    new->next = NULL;  /* Because this will be the last node */

    /* If list is empty */
    if (*head == NULL)
    {
        *head = new;
        return (new);
    }

    /* Otherwise, walk to the last node */
    current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    /* Attach new node at the end */
    current->next = new;

    return (new);
}
