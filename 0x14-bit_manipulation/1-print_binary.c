#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit_count = sizeof(n) * 8, lead = 0;

	while (bit_count)
	{
		if (n & 1L << --bit_count)
		{
			_putchar('1');
			lead++;
		}
		else if (lead)
			_putchar('0');
	}
	if (!lead)
		_putchar('0');
}
