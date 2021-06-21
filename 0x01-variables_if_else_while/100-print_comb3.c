#include<stdio.h>
/**
*main - function main prints lowercase in new line
*Return: 0
*/
int main(void)
{
int var1;
int var2;
int var3;
var3 = '1';
for (var1 = '0'; var1 <= '8'; var1++)
{
var3;
for (var2 = var3; var2 <= '9'; var2++)
{
putchar(var1);
putchar(var2);
if (var2 == '9')
var3++;
if (var1 == '8' && var2 == '9')
break;
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
