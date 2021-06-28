#include "holberton.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string
 *
 *@str: first argument
 * Return: null
 */
void _puts(char *str)
{
int l;
l = strlen(str);
for (i = 0; i < l; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
