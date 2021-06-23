#include "holberton.h"
#include <ctype.h>
/**
 * _islower - check for lowercase.
 *
 * Return: 0 0r 1.
 */
int _islower(int c)
{
int r;
if (islower(c))
r = 1;
else
r = 0;
return (r);
}
