#include "hash_tables.h"
/**
 * free_hash_node_t - frees a linked list
 * @head: the head of the hash_node_t list
 *
 */

void free_hash_node_t(hash_node_t *head)
{
if (head == NULL)
return;
if (head->next != NULL)
free_hash_node_t(head->next);
if (head->key)
free(head->key);
if (head->value)
free(head->value);
free(head);
}
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned int i;
hash_node_t *runner;

i = 0;
while (i < ht->size)
{
if (ht->array[i] == NULL)
{
i++;
continue;
}
runner = ht->array[i];
free_hash_node_t(runner);
i++;
}
free(ht->array);
free(ht);
}
