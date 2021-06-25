#include "holberton.h"
#include <ctype.h>
/**
 *_isupgper - checks if c is upper case
 *@c: parameter for _isupper
 *Return: 1 or 0
 */
int _isupper(int c);
{
int r;
if (isupper(c))
r = 1;
else
r = 0;
return (r);
}
