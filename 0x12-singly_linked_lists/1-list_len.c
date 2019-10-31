#include "lists.h"
/**
 * list_len - return number of elements in a list
 * @h: head pointer to list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
unsigned int i;

while (h)
{
h = h->next;
i++;
}
return (i);
}
