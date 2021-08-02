#include "lists.h"
/**
 *free_listint2 - a function that free lits in memeory
 *and set the head to null
 *@head: parameter head pointer
 *Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *current, *next;
current = *head;
if (current == NULL)
return;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
*head = current;
}
