#include "holberton.h"
#include <stdio.h>

/**
 *puts_half - a function that prints half of a string
 *
 *@str: function argument
 * Return: null
 */
void puts_half(char *str)
{
int i;
int l;
l = strlen(str);
if (l % 2 == 0)
{
for (i = (l / 2); i <= l - 1; i++)
_putchar(str[i]);
}
else
{
for (i = (l / 2) + 1; i <= l - 1; i++)
_putchar(str[i]);
}
_putchar('\n');
}
