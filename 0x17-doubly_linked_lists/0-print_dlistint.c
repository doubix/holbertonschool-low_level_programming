#include "lists.h"
/**
 * print_dlistint - prints list elms and returns size of list
 * @h: pointer to head
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t s;

for (s = 0; h; s++)
{
printf("%i\n", h->n);
h = h->next;
}
return (s);
}
