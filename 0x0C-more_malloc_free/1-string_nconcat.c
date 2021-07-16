#include "holberton.h"
#include <stdlib.h>




/**
 * _strlen - return length of string
 *
 * @str: string argument
 *
 * Return: int
 */


int _strlen(char *str)
{
	int counter = 0;

	while (*str != 0)
	{
		counter++;
		str++;
	}
	return (counter);
}



/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to new space in memory that contains s1 + n bytes of s2
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int lens1, lens2, nofbyt, i, j;
char *p;
lens1 = (s1 != NULL) ? _strlen(s1) : 0;
lens2 = (s2 != NULL) ? _strlen(s2) : 0;
nofbyt = (n >= lens2) ? lens2 : n;
p = malloc((lens1 + nofbyt + 1) * sizeof(char));
if (p == NULL)
return (NULL);
for (i = 0; i < lens1; i++)
p[i] = s1[i];
for (j = 0; j < nofbyt; j++)
p[i + j] = s2[j];
p[i + j] = '\0';
return (p);
}
