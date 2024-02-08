#include "search_algos.h"

/**
 * binary_search - searches for a int value in a sorted array
 *                 using binary search.
 * @array: points to the first element of the array to search.
 * @size: number of elements in the array.
 * @value: value to search for.
 *
 * Return: -1 if the value is not present or the array is NULL,
 *         Otherwise, the index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t before, after, id;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform binary search */
	for (before = 0, after = size - 1; after >= before;)
	{
		printf("Searching in array: ");
		for (id = before; id < after; id++)
			printf("%d, ", array[id]);
		printf("%d\n", array[id]);

		/* Calculate the middle index */
		id = before + (after - before) / 2;

		/* If the middle element is the value */
		if (array[id] == value)
			/* Return the index */
			return (id);

		/* If the middle element is greater than the value */
		if (array[id] > value)
			/* Update the right boundary */
			after = id - 1;
		else
			/* Otherwise, update the left boundary */
			before = id + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}
