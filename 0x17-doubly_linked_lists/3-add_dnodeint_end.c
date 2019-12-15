#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: double pointer to head
 * @n: element data
 * Return: pointer to new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *curr;

curr = *head;
if (!head)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (!curr)
{
*head = new_node;
new_node->prev = NULL;
return (new_node);
}
for (; curr->next; curr = curr->next)
;
new_node->prev = curr;
curr->next = new_node;
return (new_node);
}
