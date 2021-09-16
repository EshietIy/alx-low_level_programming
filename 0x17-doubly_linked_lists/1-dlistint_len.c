#include "lists.h"
/**
 * dlistint_len - a function that number of element in a dlistint_t
 *@h: pointer to the first node
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t no_of_node = 0;
const dlistint_t *current = h;
if (!h)
{
return (no_of_node);
}
while (current)
{
current = current->next;
no_of_node++;
}
return (no_of_node);
}
