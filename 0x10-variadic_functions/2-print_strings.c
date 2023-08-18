#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of args
 * @...: more strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
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
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				id ? (separator ? separator : "") : "\n");
	va_end(ap);
}
