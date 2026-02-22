#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head->next;   /* Save next node */

        free(head->str);     /* Free string */
        free(head);          /* Free node */

        head = temp;         /* Move to next node */
    }
}
