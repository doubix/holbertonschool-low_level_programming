#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i = 0;
hash_node_t *tmp;

if (ht)
{
for  (i = 0; i < ht->size; i++)
{
if (ht->array[i])
{
tmp = ht->array[i];
while (tmp)
{
ht->array[i] = ht->array[i]->next;
free(tmp);
tmp = ht->array[i];
}
}
}
free(ht->array);
free(ht);
}
}
