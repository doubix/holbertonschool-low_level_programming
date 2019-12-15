#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index idx
 * @head: pointer to head
 * @index: position to return the node
 * Return: NULL or node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

for (; i < index && head; i++)
head = head->next;
if (!head)
return (NULL);
return (head);
}
