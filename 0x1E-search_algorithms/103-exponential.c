#include "search_algos.h"

/**
 * _binary_search - looks for int value in a sorted array
 *                 using binary search.
 * @array: points to the first element of the array to search.
 * @left: starting index of the sub_array to search.
 * @rw: ending index of the sub_array to search.
 * @value: value to search for.
 *
 *Return: -1 if the value is not present or the array is NULL,
 *        Otherwise, the index where the value is located.
 */

int _binary_search(int *array, size_t left, size_t rw, int value)
{
	size_t id;

	/*Check if the array is NULL */
	if (array == NULL)
		return (-1);

	while (rw >= left)
	{
		printf("Searching in array: ");
		for (id = left; id < rw; id++)
			printf("%d, ", array[id]);
		printf("%d\n", array[id]);
		/*calc the middle index */
		id = left + (rw - left) / 2;

		/*If the middle element is the value */
		if (array[id] == value)
			/*Return the index */
			return (id);
		/*If the middle element is greater than the value */
		if (array[id] > value)
			/*Update the rw boundary */
			rw = id - 1;
		else
			/*Otherwise, update the left boundary */
			left = id + 1;
	}

	/*Value not found, return -1 */
	return (-1);
}

/**
 * exponential_search - looks for int value in a sorted array
 *                     using exponential search.
 * @array: points to the first element of the array to search.
 * @size: number of elements in the array.
 * @value: value to search for.
 *
 * Return: -1 if the value is not present or the array is NULL,
 *        Otherwise, the index where the value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t id = 0, rw;

	/*Check if the array is NULL */
	if (array == NULL)
		return (-1);
	/*Perform exponential search if the first element is not the target value */
	if (array[0] != value)
	{
		for (id = 1; id < size && array[id] <= value; id = id * 2)
			printf("Value checked array[%ld] =[%d]\n", id, array[id]);
	}

	/*Determine the range where the value is expected to be found */
	rw = id < size ? id : size - 1;
	printf("Value found between indexes[%ld] and[%ld]\n", id / 2, rw);
	/*Perform binary search within the identified range */
	return (_binary_search(array, id / 2, rw, value));
}
