#include"holberton.h"
/**
 *_print_rev_recursion - a function that prints reverse of string
 *@s: argument to the function
 *return void
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
