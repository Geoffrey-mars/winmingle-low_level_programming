#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the head pointer of the list
 *
 * Return: the value of the deleted node, or 0 if empty
 */

int pop_listint(listint_t **head)
{
    listint_t *tmp;
    int n;

    if (head == NULL || *head == NULL)
        return 0;

    tmp = (*head)->next;   /* save next node */
    n = (*head)->n;        /* save value */
    free(*head);           /* free the head node */
    *head = tmp;           /* update head */

    return n;
}
