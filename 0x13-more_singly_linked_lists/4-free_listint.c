#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
    listint_t *tmp;

    while (head != NULL)
    {
        tmp = head->next;  /* save next node */
        free(head);        /* free current node */
        head = tmp;        /* move to next */
    }
}
