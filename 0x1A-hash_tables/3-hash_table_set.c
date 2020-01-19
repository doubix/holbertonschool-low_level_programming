#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key to add
 * @value: value accosiated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned int long i;
hash_node_t *new;

i = key_index((unsigned char *)key, ht->size);

new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);

new->value = (char *)value;
new->key = (char *)key;
new->next = NULL;
if (!ht->array[i])
ht->array[i] = new;
else
{
new->next = ht->array[i];
ht->array[i] = new;
}
return (1);
}
