#include "lists.h"

/**
 * sum_dlistint - find sum of elements in the list
 * @head: head of linked list
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *current;
int sum = 0;
current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
