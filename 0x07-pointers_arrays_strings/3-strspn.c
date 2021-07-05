#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: substring
 *
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
int lens, lenacpt, i, x, y, num;
i = 0;
num = 0;
/* get lenght of s */
while (*(s + i) != '\0')
{
lens++;
i++;
}
/* get lenth of accept*/
i = 0;
while (*(accept + i) != '\0')
{
lenacpt++;
i++;
}
for (x = 0; x < lens; x++)
{
for (y = 0; y < lenacpt; y++)
{
if (*(s + x) == *(accept + y))
{
num++;
break;
}
}
if (*(s + x) != *(accept + y))
break;
}
return (num);
}
