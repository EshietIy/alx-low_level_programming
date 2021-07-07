#include "holberton.h"

/**
 * _strlen - return length of a string
 *
 * @s: var to check (array of chars)
 *
 * Return: the length of the string (int)
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != 0)
	{
		counter++;
		s++;
	}

	return (counter);
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
	if (_strlen(s) == 0)
		return (1);
	return (checker(s, _strlen(s), 0));
}
