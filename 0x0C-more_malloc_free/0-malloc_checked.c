#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: memory size argument
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *t = malloc(b);

	if (t == NULL)
		exit(98);
	return (t);
}
