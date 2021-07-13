#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"

/**
 * free_grid - function that concatenates two strings
 * @grid: function argument
 * @height: function argument
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
