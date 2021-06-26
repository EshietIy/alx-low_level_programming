#include "holberton.h"
#include <ctype.h>
/**
 *_isdigit - checks if c is a number
 *@c: parameter for _isdigit
 *Return: 1 or 0
 */
int _isdigit(int c)
{
int r;
if (isdigit(c))
r = 1;
else
r = 0;
return (r);
}
