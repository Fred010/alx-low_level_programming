#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number to be used in bit flippping
 * @m: second number to be used
 *
 * Return: flipped numbers bit count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_count = 0;
	unsigned long int result_XOR = n ^ m;

	while (result_XOR)
	{
		if (result_XOR & 1ul)
			bit_count++;
		result_XOR = result_XOR >> 1;
	}
	return (bit_count);
}
