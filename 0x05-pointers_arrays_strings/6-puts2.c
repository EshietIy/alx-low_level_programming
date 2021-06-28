#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - Code to print string to standard output
 * @str: string value for the argument of the function
 * Return: void
 */

void puts2(char *str)
{
int c;
for (c = 0; str[c] != 0; c++)
{
if (c % 2 != 1)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
