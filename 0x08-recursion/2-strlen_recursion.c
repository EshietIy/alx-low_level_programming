#include"holberton.h"
/**
 *_strlen_recursion - function that return the length of string
 *@s: argument to the function
 *Return: 1 or 0
 */
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
else
return (0);
}
