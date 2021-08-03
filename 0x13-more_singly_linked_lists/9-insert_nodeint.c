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
listint_t *current = *head, *tmp, *newNode = malloc(sizeof(listint_t));
unsigned int i;
if (!newNode)
return (NULL);
for (i = 0; i < idx - 1; i++)
{
if (!current)
return (NULL);
current = current->next;
}
newNode->n = n;
tmp = current->next;
current->next = newNode;
newNode->next = tmp;
return (newNode);
}
