#include "hash_tables.h"

/**
 *hash_table_get - a function that retrieve a value using the key
 *@ht: hash table to check from
 *@key: is the key to lokk for
 *
 *Return: char
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *node;
if (!ht || !key)
return (NULL);
idx = key_index((const unsigned char *)key, ht->size);
node = ht->array[idx];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
