#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to pointer to the head of the list
 * Return: number of nodes freed
 *
 * Can handle lists with loops.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *next;
    const listint_t *slow, *fast;
    size_t count;

    /* Variable declarations at the top for C90 compliance */
    count = 0;
    if (!h || !*h)
        return 0;

    slow = fast = *h;

    /* Detect loop using Floyd's cycle-finding algorithm */
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break;
    }

    /* If no loop, free normally */
    if (slow != fast)
    {
        current = *h;
        while (current)
        {
            next = current->next;
            free(current);
            current = next;
            count++;
        }
        *h = NULL;
        return count;
    }

    /* Loop exists, find start of loop */
    slow = *h;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    /* Free nodes before loop starts */
    current = *h;
    while (current != slow)
    {
        next = current->next;
        free(current);
        current = next;
        count++;
    }

    /* Free loop nodes once */
    do
    {
        next = current->next;
        free(current);
        current = next;
        count++;
    } while (current != slow);

    *h = NULL;
    return count;
}
