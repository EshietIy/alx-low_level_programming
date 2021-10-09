#include "hash_tables.h"

/**
 *hash_table_print - a function that prints the hash table
 *@ht: that hash table
 *Return: Void
 **/
void hash_table_print(const hash_table_t *ht)
{
unsigned int i, flag;
hash_node_t *node;

if (!ht)
return;

printf("{");
i = 0;
flag = 1;
while (i < ht->size)
{
if (ht->array[i] == NULL)
{
i++;
continue;
}
if (flag == 0)
printf(", ");
flag = 0;
node = ht->array[i];
while (node)
{
printf("\'%s\': \'%s\'", node->key, node->value);
if (node->next != NULL)
printf(", ");
node = node->next;
}
i++;
}
printf("}\n");
}
