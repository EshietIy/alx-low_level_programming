#include "lists.h"
/**
 * reverse_listint - a function that reverse the linked list
 * @head: pointer to head parameter
 * Return: pointer to the 1st element
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;
prev = NULL;
next = NULL;
if (!(*head))
return (NULL);
next = (*head)->next;
(*head)->next = prev;
prev = *head;
while (next)
{
*head = next;
next = (*head)->next;
(*head)->next = prev;
prev = *head;
}
return (*head);
}

