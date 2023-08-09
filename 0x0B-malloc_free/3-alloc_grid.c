#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: integer
 */

int **alloc_grid(int width, int height)
{
	int arr1, arr2, arr3, arr4;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (arr1 = 0; arr1 < height; arr1++)
	{
		grid[arr1] = malloc(sizeof(int) * width);

		if (grid[arr1] == NULL)
		{
			for (arr2 = arr1; arr2 >= 0; arr2--)
			{
				free(grid[arr2]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (arr3 = 0; arr3 < height; arr3++)
	{
		for (arr4 = 0; arr4 < width; arr4++)
		{
			grid[arr3][arr4] = 0;
		}
	}
	return (grid);
}
