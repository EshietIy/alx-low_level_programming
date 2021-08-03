#include "lists.h"
/**
 *sum_listint - a function that return sum of all data
 *@head: pointer to the head
 *Return: sum in int
 */
int sum_listint(listint_t *head)
{
listint_t *temp = head;
int sum = 0;
if (!head)
return (0);
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
