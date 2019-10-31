#include"lists.h"
/**
 * free_list - frees a list
 * @head: pointer to first node of list
 */
void free_list(list_t *head)
{
list_t *tmp, *next;

tmp = head;
while (tmp != NULL)
{
next = tmp->next;
free(tmp->str);
free(tmp);
tmp = next;
}
}
