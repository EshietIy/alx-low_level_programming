#include "hash_tables.h"

hash_node_t *create_new(const char *key, const char *value);

/**
 *hash_table_set - a function that adds an element to the hash table
 *@ht: (hash_table_t ) hash table to add or update
 *@key: (char) the key
 *@value: value associated with the key
 *
 *Return: (int) 1 on success 0 on faluier
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new, *runner;
unsigned long int indx;

if (!ht || !key)
return (0);

indx = key_index((const unsigned char *)key, ht->size);

if (ht->array[indx] == NULL)
{
new = create_new(key, value);
if (!new)
return (0);
ht->array[indx] = new;
return (1);
}
runner =  ht->array[indx];
while (runner)
{
if (strcmp(key, runner->key) == 0)
{
free(runner->value);
runner->value = strdup(value);
return (1);
}
runner = runner->next;
}
new = create_new(key, value);
if (!new)
return (0);
new->next = ht->array[indx];
ht->array[indx] = new;
return (1);
}

/**
 *create_new - a function that creates a new node
 *@key: (const char) key
 *@value: (const char) value
 *
 *Return: pointer to new node or NULL
 */
hash_node_t *create_new(const char *key, const char *value)
{
hash_node_t *new;
new = malloc(sizeof(hash_node_t));
if (!new)
{
free(new);
return (NULL);
}
new->key = strdup(key);
if (!new->key)
{
free(new);
return (NULL);
}
new->value = strdup(value);
if (!new->value)
{
free(new);
return (NULL);
}
new->next = NULL;
return (new);
}
