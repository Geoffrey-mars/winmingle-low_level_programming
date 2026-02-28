#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head pointer
 *
 * Return: pointer to the new head
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next;

    while (current)
    {
        next = current->next;  /* save next node */
        current->next = prev;  /* reverse link */
        prev = current;        /* move prev forward */
        current = next;        /* move current forward */
    }

    *head = prev;  /* update head pointer */
    return (*head);
}
