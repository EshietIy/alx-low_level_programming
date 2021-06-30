#include "holberton.h"
/**
 *_strcat - concatenate two strings
 *@dest: destination argument
 *@src: source argument
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int l;
int j;
l = 0;
for (i = 0; dest[i] != '\0'; i++)
l++;
j = 0;
while (src[j] != '\0')
{
dest[l++] = src[j];
j++;
}
return (dest);
}
