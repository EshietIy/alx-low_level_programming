#include "holberton.h"
/**
 *print_alphabet - prints lowercase alphabet
 *Return: null
 */
void print_alphabet(void)
{
char alph;
alph = 'a';
while (alph <= 'z')
{
	_putchar(alph);
	alph++;
}
_putchar('\n');
return;
}

