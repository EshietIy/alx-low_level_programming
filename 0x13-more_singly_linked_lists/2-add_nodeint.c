#include "lists.h"
/**
 *add_nodeint - a function that adds a new node to the beginning of a node
 *@head: pointer to the head
 *@n: int parameter for the new node
 *Return: a pointer to the new node created
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (*head);
}
