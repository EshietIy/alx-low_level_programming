#include "holberton.h"

/**
 * is_prime_number - returns 1 if the input argument is a prime number.
 *
 * @n: the number integer
 *
 * Return: returns 1 if the input integer is a prime number,
 * or 0.
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n < 2)
		return (0);
	return (1);
}
