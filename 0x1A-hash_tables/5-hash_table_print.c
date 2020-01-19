#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned int long i = 0;
hash_node_t *tmp;

if (ht)
{
printf("{");
while (i < ht->size)
{
if (ht->array[i])
{
tmp = ht->array[i];
while (tmp)
{
printf("'%s': '%s'", tmp->key, tmp->value);
tmp = tmp->next;
if (tmp)
printf(", ");
}
}
if (ht->array[i + 1])
printf(", ");
i++;
}
printf("}\n");
}
}
