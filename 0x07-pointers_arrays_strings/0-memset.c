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
char **pnts;
pnts = &s;
int i;
i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (pnts);
}
