#include "lists.h"
#include <stddef.h>
/**
 * _putchar - prints a character to stdout
 * @c: the character to be printed
 *
 * Return: 1 if success, else -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * print_string - print a string
 * @s: the object to be printed
 *
 * Return: the length of the string, excluding null character
 */
int print_string(char *s)
{

if (!s)
s = "(nil)";
while (*s)
_putchar(*s++);
return (0);
}

/**
 * _print_int - prints digits recursively
 * @n: the int argument whose digits are to be printed
 * Return: count
 */
int _print_int(unsigned int n)
{
if (n / 10)
_print_int(n / 10);
_putchar((n % 10) + '0');
return (0);
}
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
if (h->str == NULL)
{
_putchar('[');
_putchar('0');
_putchar(']');
_putchar(' ');
print_string(h->str);
}
else
{
_putchar('[');
_print_int(h->len);
_putchar(']');
_putchar(' ');
print_string(h->str);
}
_putchar('\n');
count++;
h = h->next;
}
return (count);
}
