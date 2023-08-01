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
	int i;
	int initial_sum = 0;
	int final_sum = 0;

	for (i = 0; i < size; i++)
	{
		initial_sum += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		final_sum += a[i * size + (size - 1 - i)];
	}
	printf("Sum of primary diagonal: %d\n", initial_sum);
	printf("Sum of secondary diagonal: %d\n", final_sum);
}
