#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of table
 * Return: hash_table_t or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;

if (size == 0)
return (NULL);

ht = malloc(sizeof(hash_table_t));
if (!ht)
return (NULL);
ht->array = malloc(size * sizeof(hash_node_t *));
if (!ht->array)
{
free(ht);
return (NULL);
}
ht->size = size;
return (ht);
}
