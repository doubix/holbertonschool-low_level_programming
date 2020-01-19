#include "hash_tables.h"

/**
 * key_index - generates the key index
 * @key: the key
 * @size: table size
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned int long hash;

hash = hash_djb2(key);
return (hash % size);
}
