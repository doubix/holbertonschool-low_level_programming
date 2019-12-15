#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node in doubly linked list
 * @head: double pointer to list
 * @index: index of node to delete
 * Return: 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *curr;
unsigned int i;

if (!head || !(*head))
return (-1);
curr = *head;
if (index == 0)
{
if (curr->next != NULL)
curr->next->prev = NULL;
*head = curr->next;
free(curr);
return (1);
}
for (i = 0; curr; i++)
{
if (i == index)
{
curr->prev->next = curr->next;
if (curr->next != NULL)
curr->next->prev = curr->prev;
free(curr);
return (1);
}
curr = curr->next;
}
return (-1);
}
