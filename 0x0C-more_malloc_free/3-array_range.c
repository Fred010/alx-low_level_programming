#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum array of integers
 * @max: maximum array of integers
 *
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int index = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[index] = min;
		index++;
		min++;
	}
	return (arr);
}
