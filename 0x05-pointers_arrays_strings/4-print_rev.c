#include "holberton.h"
#include <stdio.h>

/**
 * print_rev  - a function that prints a string in reverse
 *
 *@s: function argument
 * Return: null
 */
void _print_rev(char *s)
{
int l;

for (l = (strlen(s)-1); l >= 0 ; l--)
{
_putchar(s[l]);
}
_putchar('\n');
}
