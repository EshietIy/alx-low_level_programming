#include "lists.h"
/**
 *free_listint - a function that free lits in memeory
 *@head: parameter head pointer
 *Return: void
 */
void free_listint(listint_t *head)
{
listint_t *current, *next;
current = head;
if (current == NULL)
return;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
