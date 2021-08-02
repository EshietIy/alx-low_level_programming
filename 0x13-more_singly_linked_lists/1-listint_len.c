#include "lists.h"
/**
 *listint_len - a fuction
 * that returns a number of elements in a liked list
 *@h: header pointer parameter
 *Return: size_t ( the number of elements in a liked list)
 */
size_t listint_len(const listint_t *h)
{
size_t count;
if (h == NULL)
return (0);
count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
