#include "main.h"

/**
 * _abs - calculates the absolute value of an integer
 * @c: number to be calculated
 * Return: Absolute value or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
