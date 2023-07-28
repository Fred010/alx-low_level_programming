#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 * @b: points the buffer
 * @size: content in bytes
 *
 * Return: hexadecimal representation and the ASCII characters
 */

void print_buffer(char *b, int size)
{
	int m1, j, i;

	m1 = 0;

	if (size <= m1)
	{
		printf("\n");
		return;
	}

	while (m1 < size)
	{
		j = size - m1 < 10 ? size - m1 : 10;
		printf("%08x: ", m1);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + m1 + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}

		for (i = 0; i < j; i++)
		{
			int k = *(b + m1 + i);

			if (k < 32 || k > 132)
			{
				k = '.';
			}

			printf("%c", k);
		}

		printf("\n");
		m1 += 10;
	}
}
