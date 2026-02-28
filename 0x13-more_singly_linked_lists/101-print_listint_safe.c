#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the first node
 * Return: number of nodes printed
 *
 * This function prints all nodes in a list, even if there is a loop.
 * If a loop is found, it prints the loop with an arrow and stops.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast, *loop_start, *current;
    size_t count;

    /* Variable declarations at top to satisfy C90 */
    slow = fast = head;
    loop_start = NULL;
    count = 0;

    if (!head)
        return 0;

    /* Detect if there is a loop using Floyd's cycle-finding algorithm */
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break;
    }

    /* No loop found */
    if (slow != fast)
    {
        current = head;
        while (current)
        {
            printf("[%p] %d\n", (void *)current, current->n);
            current = current->next;
            count++;
        }
        return count;
    }

    /* Loop exists, find start of loop */
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    loop_start = slow;

    /* Print nodes until we reach the start of the loop */
    current = head;
    while (current != loop_start)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
        count++;
    }

    /* Print the loop nodes once with arrow to indicate repetition */
    do
    {
        printf("[%p] %d\n", (void *)current, current->n);
        current = current->next;
        count++;
    } while (current != loop_start);

    printf("-> [%p] %d\n", (void *)current, current->n);

    return count;
}
