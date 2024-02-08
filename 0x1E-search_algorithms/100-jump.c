#include "search_algos.h"
/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t id, jump, step;

	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate the jump step size */
	step = sqrt(size);

	/* Perform the jump search */
	for (id = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* Store the previous jump position */
		id = jump;

		/* Update the jump position */
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", id, jump);

	/* Adjust the jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* Perform a linear search within the identified range */
	for (; id < jump && array[id] < value; id++)
		printf("Value checked array[%ld] = [%d]\n", id, array[id]);

	printf("Value checked array[%ld] = [%d]\n", id, array[id]);

	/* Check if the value is found and return the corresponding index */
	return (array[id] == value ? (int)id : -1);
}
