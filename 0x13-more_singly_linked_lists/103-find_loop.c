#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head, *fast = head;

    if (!head)
        return NULL;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)  /* loop detected */
            break;
    }

    if (!fast || !fast->next)
        return NULL;  /* no loop */

    /* Find start of loop */
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;  /* start of loop */
}
