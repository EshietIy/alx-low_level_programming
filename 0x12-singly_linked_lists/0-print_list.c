#include "lists.h"
/**
 *print_list - print list
 *@h: head pointer argument
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
int count = 0;
while (h != NULL)
{
printf("[%d] %s\n", h->str != NULL ? h->len : 0,
h->str != NULL ? h->str : "(nil)");
count++;
h = h->next;
}
return (count);
}
