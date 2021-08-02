#include "lists.h"
/**
 *add_nodeint_end - add's a new node to the last node
 *@head: pointer to the head
 *@n: int element parameter
 *Return: Null or address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *last = *head;
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = NULL;
new_node->n = n;
while (last && last->next != NULL)
{
last = last->next;
}
if (last)
last->next = new_node;
else
*head = new_node;
return (new_node);
}
