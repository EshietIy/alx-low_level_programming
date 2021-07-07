#include "holberton.h"
/**
 *_puts_recursion - a function that prints a string
 *@s: string argument for the fuction
 *Return: void
 */
void _puts_recursion(char *s)
{
if (*(s + 1) == '\0')
{
_putchar(*s);
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion((s + 1));
}
