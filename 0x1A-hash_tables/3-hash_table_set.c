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
hash_node_t *new, *curr;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
i = key_index((unsigned char *)key, ht->size);

if (ht->array[i])
{
curr = ht->array[i];
while (curr)
{
if (!strcmp(curr->key, key))
{
free(curr->value);
curr->value = strdup(value);
return (1);
}
curr = curr->next;
}
new = malloc(sizeof(hash_node_t *));
if (!new)
return (0);

new->value = strdup(value);
new->key = strdup(key);
new->next = NULL;
new->next = ht->array[i];
ht->array[i] = new;
}
else
{
ht->array[i] = new;
}
return (1);
}
