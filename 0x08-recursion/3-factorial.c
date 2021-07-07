#include"holberton.h"
/**
 *factorial - a function that returns a factorial of a number
 *@n: int argument
 *Return: -1 or 1 or factorial of number
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
