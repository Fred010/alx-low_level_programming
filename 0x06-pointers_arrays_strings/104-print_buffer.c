#include <stdio.h>
#include "main.h"
/**
 * print_buffer - prints a buffer
 * @b: points the buffer
 * @size: content in bytes
 * Return: hexadecimal representation and the ASCII characters
 */

void print_buffer(char *b, int size)
{
	int m1, j, i;

	m1 = 0;
	if (size <= 0)
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
			int c_run = *(b + m1 + i);

			if (c_run < 32 || c_run > 132)
			{
				c_run = '.';
			}
			printf("%c", c_run);
		}
		printf("\n");
		m1 += 10;
	}
}
