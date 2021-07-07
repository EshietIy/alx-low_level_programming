#include "holberton.h"
#include "_strlen.c"

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
