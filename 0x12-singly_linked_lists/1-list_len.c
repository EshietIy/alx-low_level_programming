#include "lists.h"
/**
 *list_len - retun the number linked list
 *@h: head of the linked list
 *Return: size_t
 *
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
