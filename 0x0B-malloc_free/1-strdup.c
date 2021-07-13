#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * * @str: string argument
 * Return: 0
 */

char *_strdup(char *str)
{
int i = 0, size = 0;
char *x;

if (str == NULL)
return (NULL);

for (; str[size] != '\0'; size++)
;

/*+1 on the size puts the end of string character*/
x = malloc(size * sizeof(*str) + 1);

if (x == 0)
	return (NULL);
else
{
for (; i < size; i++)
x[i] = str[i];
}
return (x);
}
