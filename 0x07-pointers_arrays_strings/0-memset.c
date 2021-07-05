#include "holberton.h"
/**
 *_memset - a function that fills memory const byte
 *@s: first argument
 *@b: second argument
 *@n: 3rd argument
 *Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
