#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively for a value in a sorted
 *                             array of integers using binary search.
 * @array: A pointer to the first element of the [sub]array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t id;

	/* If the right boundary is less than the left boundary */
	if (right < left)
		/* Value not found, return -1 */
		return (-1);

	printf("Searching in array: ");

	/* Print the [sub]array being searched */
	for (id = left; id < right; id++)

		printf("%d, ", array[id]);

	printf("%d\n", array[id]);
	/* Calculate the middle index */
	id = left + (right - left) / 2;

	/* If the middle element is the value and it's the first occurrence */
	if (array[id] == value && (id == left || array[id - 1] != value))
		/* Return the index */
		return (id);

	/* If the middle element is greater than or equal to the value */
	if (array[id] >= value)
		/* Recursively search the left subarray */
		return (advanced_binary_recursive(array, left, id, value));
	/* Recursively search the right subarray */
	return (advanced_binary_recursive(array, id + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 *                   of integers using advanced binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);
	/* Call the recursive function */
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
