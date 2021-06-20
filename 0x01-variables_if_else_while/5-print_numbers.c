#include<stdio.h>
/**
*main - function main prints lowercase in new line
*Return: 0
*/
int main(void)
{
int ch;
char nl;
nl = '\n';
for (ch = 0; ch <= 9; ch++)
{
printf("%d", ch);
}
putchar(nl);
return (0);
}
