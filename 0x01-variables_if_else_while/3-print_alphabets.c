#include<stdio.h>
/**
*main - function main prints lowercase in new line
*Return: 0
*/
int main(void)
{
char ch;
char nl;
nl = '\n';
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar(nl);
return (0);
}
