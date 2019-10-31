#include "lists.h"
/**
 * print_list - print all the elements of a list
 * @h: head pointer to list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
unsigned int i;

while (h)
{
if (h->str == NULL)
printf("[%u] %s\n", 0, "(nil)");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
