#include "holberton.h"
/**
 *main - start of program
 *Return: 0
 */
int main(void)
{
char i[] = "Holberton";
int x;
x = 0;
while (x <= 8)
{
_putchar(i[x]);
x++;
}
_putchar('\n');
return (0);
}
