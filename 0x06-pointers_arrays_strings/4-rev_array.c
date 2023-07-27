#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: number of array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, id;

	for (id = n - 1; id >= n / 2; id--)
	{
		temp = a[n - 1 - id];
		a[n - 1 - id] = a[id];
		a[id] = temp;
	}
}
