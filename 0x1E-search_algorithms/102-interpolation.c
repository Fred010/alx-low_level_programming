#include "search_algos.h"

/**
  * interpolation_search - looks for int value in a sorted array
  *                        using interpolation search.
  * @array: points to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  *
  * Return: -1 if the value is not present or the array is NULL,
  *         Otherwise, the first index where the value is located.
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t id, lw, rw;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform interpolation search */
	for (lw = 0, rw = size - 1; rw >= lw;)
	{
		id = lw + (((double)(rw - lw) /
					(array[rw] - array[lw])) * (value - array[lw]));
		if (id < size)
			printf("Value checked array[%ld] = [%d]\n", id, array[id]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", id);
			break;
		}

		if (array[id] == value)
			return (id);
		if (array[id] > value)
			rw = id - 1;
		else
			lw = id + 1;
	}

	return (-1);
}
