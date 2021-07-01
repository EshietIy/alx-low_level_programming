#include "holberton.h"
/**
 *_strncat - fucntion that concatenates two string
 *@dest: destination argument
 *@src: source argument
 *@n: n number of element
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int l;
int j;
l = 0;
for (j = 0; dest[j] > '\0'; j++)
l++;
for (i = 0; ((i < n) && (src[i] != '\0')); i++)
{
dest[l++] = src[i];
dest[l + 1] = '\0';
}
return (dest);
}
