#include<stdio.h>
/**
*main - function main prints lowercase in new line
*Return: 0
*/
int main(void)
{
char ch;
char x;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
