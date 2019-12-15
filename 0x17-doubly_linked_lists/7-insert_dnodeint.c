#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node in double linked list
 * @h: double pointer to list
 * @idx: index to insert new_node node
 * @n: new node data
 * Return: pointer to new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *curr;
unsigned int i;

if (!h)
return (NULL);
curr = *h;
if (idx == 0)
{
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
for (i = 0; curr; i++)
{
if (i == idx - 1)
{
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = curr->next;
new_node->prev = curr;
if (curr->next != NULL)
curr->next->prev = new_node;
curr->next = new_node;
return (new_node);
}
curr = curr->next;
}
return (NULL);
}
