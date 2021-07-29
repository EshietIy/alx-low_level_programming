#include "lists.h"
/**
 * _strlen - return length of string
 *
 * @s: string to count
 *
 * Return: the size
 */
int _strlen(char *s)
{
int counter = 0;
while (s[counter] != 0)
{
counter++;
}
return (counter);
}

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
temp = malloc(sizeof(list_t));
if (temp == NULL || string == NULL)
free(temp);
return (NULL);
temp->str = string;
temp->next = *head;
temp->len = _strlen(string);
*head = temp;
return (temp);
}
