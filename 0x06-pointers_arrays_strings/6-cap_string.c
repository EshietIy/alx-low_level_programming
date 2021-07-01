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
 * *cap_string - Capitalizez all words of a string
 * @str: Pointer to string
 * Return: Pointer to str
*/
char *cap_string(char *str)
{
int len, i, position;
char ch;
len = _strlen(str);
for (i = 0; i < len; i++)
{
if (str[i] == ' ' || str[i] == '.' || str[i] == '}' || str[i] == '('
|| str[i] == '\n' || str[i] == '\t'  || str[i] == ')' || str[i] == '{'
|| str[i] == '\n' || str[i] == '\t' || str[i] == '"' || str[i] == '('
|| str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '?')
{
position = 0;
}
else
{
position++;
}
if (str[i] >= 'a' && str[i] <= 'z')
{
if (position == 1)
{
ch = str[i];
str[i] = ch - 32;
}
}
}
return (str);
}
