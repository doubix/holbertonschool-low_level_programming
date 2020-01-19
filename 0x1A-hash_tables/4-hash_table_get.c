#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key to retrieve value for
 * Return: the value, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *tmp;
unsigned long int i;

if (!ht)
return (NULL);
if (!key || strcmp(key, "") == 0)
return (NULL);
i = key_index((unsigned char *)key, ht->size);
tmp = ht->array[i];

for (; tmp; tmp = tmp->next)
{
if (strcmp(key, tmp->key) == 0)
return (tmp->value);
}
return (NULL);
}
