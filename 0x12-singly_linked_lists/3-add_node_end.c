#include "lists.h"
/**
 *_strlen - return length of string
 **@s: string to count
 * Return: the size
 **/
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
 *add_node_end - function adds node to end of node
 *@head: address to head
 *@str: string to be populated 
 *Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
  list_t *new_node = (list_t *)malloc(sizeof(list_t)), *tmp = *head;
	char *string = strdup(str);

	if (new_node == NULL || string == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (tmp && tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_node->str = string;
	new_node->len = _strlen(string);
	new_node->next = NULL;

	if (tmp)
		tmp->next = new_node;
	else
		*head = new_node;

	return (new_node);
}

