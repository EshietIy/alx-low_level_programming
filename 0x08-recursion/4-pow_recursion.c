#include"holberton.h"
/**
 * _pow_recursion - a function that returns the power of a number
 *@x: int argument of number
 *@y: int argument of the power
 *Return: int
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y > 0)
return (x * _pow_recursion(x, y - 1));
}
