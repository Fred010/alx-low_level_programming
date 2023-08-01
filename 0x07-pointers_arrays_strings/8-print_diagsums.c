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
	int i, mark;
	int initial_sum = 0;
	int final_sum = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		initial_sum = initial_sum + a[i];
	for (mark = size - 1; mark <= (size * size) - size; mark = mark + size - 1)
		final_sum = final_sum + a[mark];

	printf("Sum of primary diagonal: %d\n", initial_sum);
	printf("Sum of secondary diagonal: %d\n", final_sum);
}
