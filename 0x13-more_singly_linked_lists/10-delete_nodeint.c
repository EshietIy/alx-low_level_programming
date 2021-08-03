#include "lists.h"
/**
 * delete_nodeint_at_index - function that delete node at index
 * @head: pointer to the head parameter
 * @index: index parameter
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int x;
listint_t *current, *temp;
x = 0;
temp = *head;
if (!temp)
return (-1);
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
while (temp && ((x + 1)  != index))
{
temp = temp->next;
x++;
}
if ((x + 1) == index && temp->next)
{
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}
return (-1);
}
