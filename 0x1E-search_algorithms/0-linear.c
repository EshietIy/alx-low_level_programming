#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: the array to search through
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: returns the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL || size == 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
