#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: numbers to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int id;
	va_list ap;

	id = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);

	while (id--)
		printf("%d%s", va_arg(ap, int),
				id ? (separator ? separator : "") : "\n");
	va_end(ap);
}
