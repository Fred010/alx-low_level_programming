#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *                 of integers using linear search.
 * @array: points to the first element of the array to search.
 * @size: number of elements in the array.
 * @value: value to search for.
 *
 * Return: -1 if value is not present or the array is NULL,
 *         Otherwise, index of value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t id;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (id = 0; id < size; id++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", id, array[id]);

		/* If the value is found */
		if (array[id] == value)

			/* Return the index of the value */
			return (id);
	}

	/* Value not found, return -1 */
	return (-1);
}
