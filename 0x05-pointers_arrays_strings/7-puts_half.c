#include "holberton.h"
#include <stdio.h>

/**
 *puts_half - a function that prints half of a string
 *
 *@str: function argument
 * Return: null
 */
void puts_half(char *str)
{
int l = strlen(str);
if (l%2 == 0){
for (int i = (l/2); i <= l;i++)
putchar(str[i]);
putchar('\n');
}
else 
{
for (int i = (l/2)+1; i <= l;i++)
putchar(str[i]);
putchar('\n');
}       
}
