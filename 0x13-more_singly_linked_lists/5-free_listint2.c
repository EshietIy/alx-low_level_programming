#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the listint_t list
 */

void free_listint(listint_t *head)
{
if (!head)
return;
if (head->next)
{
free_listint(head->next);
}
free(head);
}
/**
 *free_listint2 - a function that free lits in memeory
 *and set the head to null
 *@head: parameter head pointer
 *Return: void
 */
void free_listint2(listint_t **head)
{
if (!head)
return;
if (*head)
free_listint(*head);
*head = NULL;
}
