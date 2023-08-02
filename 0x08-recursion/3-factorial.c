#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: given number
 *
 * Return: (result)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int j;
		int result = 1;

		for (j = 1; j <= n; j++)
		{
			result *= j;
		}
		return (result);
	}
}
