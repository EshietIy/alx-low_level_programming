#include "holberton.h"
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

/**
 * checker - checks if palindrome or not
 *
 * @s: strig argument
 * @l: string length argument
 * @i: index argument
 * Return: int
 */

int checker(char *s, int l, int i)
{
	if (i < ((l + 1) / 2))
	{
		return ((s[i] == s[(l - 1) - i] ? 1 : 0) * checker(s, l, i + 1));
	}
	return (1);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: strign to check
 *
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (_strlen_recursion(s) == 0)
		return (1);
	return (checker(s, _strlen_recursion(s), 0));
}
