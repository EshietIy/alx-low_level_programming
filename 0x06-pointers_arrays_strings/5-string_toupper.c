#include "holberton.h"
/**
 * _strlen - Returns length of a string
 * @s: Pointer to string
 * Return: Length of c
*/
int _strlen(char *s)
{
int index;
index = 0;
while (s[index] != '\0')
{
index++;
}
return (index);
}
/**
 * *string_toupper - Chnages all lowercase letters
 * of a string to uppercase
 * @str: Pointer to string
 * Return: Pointer to string
*/
char *string_toupper(char *str)
{
int len, i;
char ch;
len = _strlen(str);
for (i = 0; i < len; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
ch = str[i];
str[i] = ch - 32;
}
}
return (str);
}
