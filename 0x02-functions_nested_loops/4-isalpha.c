#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - checks for for alphabet.
 *@c: int argument of _isalpha
 * Return: 0 0r 1.
 */
int _isalpha(int c)
{
int r;
if (isalpha(c))
r = 1;
else
r = 0;
return (r);
}
