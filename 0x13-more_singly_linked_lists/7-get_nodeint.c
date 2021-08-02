#include "lists.h"
/**
 *get_nodeint_at_index - a fuction
 * that returns a pointer to the matching node index
 *@head: header pointer parameter
 *@index: index parameter
 *Return: listint_t (return corresponding pointer to the node)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *h = head;
unsigned int i;
if (h == NULL)
return (NULL);
for (i = 0; h != NULL; i++)
{
if (i == index)
break;
h = h->next;
}
return (h);
}
