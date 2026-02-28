#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to head pointer
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *tmp;
    unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return -1;

    if (index == 0)
    {
        tmp = *head;
        *head = (*head)->next;
        free(tmp);
        return 1;
    }

    current = *head;

    while (current != NULL && i < index - 1)
    {
        current = current->next;
        i++;
    }

    if (current == NULL || current->next == NULL)
        return -1;

    tmp = current->next;
    current->next = tmp->next;
    free(tmp);

    return 1;
}
