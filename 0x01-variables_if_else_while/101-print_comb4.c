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
int varx2;
int varx3;
varx2 = '1';
varx3 = '2';
for (var1 = '0'; var1 <= '7'; var1++)
{
for (var2 = varx2; var2 <= '8'; var2++)
{
/*if (var2 == '8')
varx2++;*/
for (var3 = varx3; var3 <= '9'; var3++)
{
putchar(var1);
putchar(var2);
putchar(var3);
if (var3 == '9')
{
varx2++;
varx3++;
}
if ((var1 == '7' && var2 == '8') && (var2 == '8' && var3 == '9'))
break;
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
