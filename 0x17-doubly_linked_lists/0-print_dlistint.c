#include "lists.h"
/**
 * print_dlistint - a function that pirnt all the element of a dlistint_t
 *@h: pointer to the first node
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t no_of_node = 0;
const dlistint_t *current = h;
if (!h)
{
return (no_of_node);
}
while (current)
{
printf("%d\n", current->n);
current = current->next;
no_of_node++;
}
return (no_of_node);
}
