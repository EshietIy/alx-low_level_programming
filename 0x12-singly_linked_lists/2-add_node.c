#include "lists.h"
/**
 *add_node - a function that adds to a noode
 *@head:  pointer of head to be added
 *@str: string to be added to each node
 *Return: A pionter to list_t
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
char *string = strdup(str);
temp = malloc(sizeof(list_temp));
if (temp == NULL || string == NULL)
free(temp);
return (NULL);
temp->str = string;
temp->next = *head;
temp->len = _strlen(string);
*head = temp;
return (temp);
}
