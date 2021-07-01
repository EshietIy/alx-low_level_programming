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
 * *leet - Encodes a string into 1337
 * @str: Pointer to string
 * Return: Pointer to str
*/
char *leet(char *str)
{
int len, i;
char ch;
len = _strlen(str);
for (i = 0; i < len; i++)
{
ch = str[i];
if (ch == 'a' || ch == 'A')
str[i] = 4 + '0';
if (ch == 'e' || ch == 'E')
str[i] = 3 + '0';
if (ch == 'o' || ch == 'O')
str[i] = 0 + '0';
if (ch == 't' || ch == 'T')
str[i] = 7 + '0';
if (ch == 'l' || ch == 'L')
str[i] = 1 + '0';
}
return (str);
}
