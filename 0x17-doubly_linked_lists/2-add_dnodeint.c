#include "lists.h"
/**
 * add_dnodeint - add node to the beginning of the list
 * @head: double pointer to head
 * @n: element data
 * Return: new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

if (!head)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
*head ? (*head)->prev = new_node : NULL;
*head = new_node;
return (new_node);
}
