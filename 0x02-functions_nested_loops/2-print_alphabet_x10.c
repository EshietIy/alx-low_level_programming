#include "holberton.h"

/**
 *print_alphabet_x10 - print a-z
 *
 *Return: null value
 */

void print_alphabet_x10(void)
{
char alph;
int x;
alph = 'a';
for (x = 0; x <= 9; x++)
{
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('/n');
}
}
