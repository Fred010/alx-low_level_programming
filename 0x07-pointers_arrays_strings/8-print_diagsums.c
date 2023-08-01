#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: integer value
 * @size: size of square matrix of integers
 * Return: Always (0)
 */

void print_diagsums(int *a, int size)
{
	int intial_sum, final_sum, i;

	intial_sum = 0;
	final_sum = 0;

	for (i = 0; i < size; i++)
	{
		intial_sum = intial_sum + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		final_sum += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", intial_sum, final_sum);
}
