#include "lists.h"
/**
 *pop_listint - a function that pops the first element of list
 *@head: parameter head pointer
 *Return: int data of popped element
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *current;
current = *head;
if (current == NULL)
return (0);
if (current)
{
n = current->n;
*head = current->next;
free(current);
}
return (n);
}
