#include "search_algos.h"
/**
 * print_array - prints an array
 * @array: array to print
 * @left: start element
 * @right: right element
 *
 */
void print_array(int *array, unsigned int left, unsigned int right)
{
	unsigned int i;

	i = left;
	printf("Searching in array: ");
	while (i <= right)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		i++;
	}
	printf("\n");

}


/**
 * binary_search - binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: returns the index where value is located or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int left, right, mid;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
