#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of args
 * @...: n parameters to sum
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int num_sum, id;
	va_list ap;

	num_sum = 0;
	id = n;

	if (!n)
		return (0);
	va_start(ap, n);

	while (id--)
		num_sum += va_arg(ap, int);
	va_end(ap);
	return (num_sum);
}
