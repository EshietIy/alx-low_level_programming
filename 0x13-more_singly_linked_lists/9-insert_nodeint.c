#include "lists.h"
/**
 *insert_nodeint_at_index - a function that insert a new node
 *at a given position
 *@head: pointer to head parameter
 *@idx: index parameter
 *@n: parameter for n int the new node
 *Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *prev, *next, *new_node;
unsigned int i;
next = *head;
new_node = malloc(sizeof(listint_t));
if (!head || !new_node)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
for (i = 0; next; i++)
{
if (idx == i)
{
new_node->next = next;
prev->next = new_node;
break;
}
prev = next;
next = next->next;
}
return (new_node);
}
