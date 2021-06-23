#include "holberton.h"
#include <ctype.h>
/**
 *print_sign - check if the parameter is + or - .
 *@n: int argument of print_sign
 *Return: 0 0r 1.
 */
int print_sign(int n)
{
int r;
if (n < 0)
{
r = -1;
_putchar('-');
}
else if (n == 0)
{
r = 0;
_putchar('0');
}
else
{
r = 1;
_putchar('+');
}
return (r);
}
