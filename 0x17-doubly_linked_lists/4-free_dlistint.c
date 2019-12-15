#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
if (!head)
return;
while (head->next)
{
head = head->next;
free(head->prev);
}
free(head);
}
