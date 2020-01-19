#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned int long i = 0;
hash_node_t *tmp;
int flag = 0;

if (ht == NULL || ht->array == NULL)
return;
printf("{");
while (i < ht->size)
{
tmp = ht->array[i];
while (tmp)
{
if (flag)
printf(", ");
printf("'%s': '%s'", tmp->key, tmp->value);
flag = 1;
tmp = tmp->next;
}
i++;
}
printf("}\n");
}
