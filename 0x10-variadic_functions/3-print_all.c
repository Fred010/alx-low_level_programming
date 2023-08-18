#include "variadic_functions.h"

/**
 * format_char - formats character
 * @separator: string to be printed between the strings
 * @ap: argument pointer
 */

void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * format_int - formats integer
 * @separator: string to be printed between the strings
 * @ap: argument pointer
 */

void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * format_float - formats float
 * @separator: string to be printed between the strings
 * @ap: argument pointer
 */

void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * format_string - formats string
 * @separator: string to be printed between the strings
 * @ap: argument pointer
 */

void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * sum_print - prints all
 * @format: format of the string
 */

void sum_print(const char * const format, ...)
{
	char *separator = "";
	int id1, id2;
	va_list ap;

	id1 = 0;
	_token_t tokens[] = {
		{"c", format_char},
		{"d", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[id1])
	{
		id2 = 0;
		while (tokens[id2]._token)
		{
			if (format[id1] == tokens[id2]._token[0])
			{
				tokens[id2].f(separator, ap);
				separator = ", ";
			}
			id2++;
		}
		id1++;
	}
	printf("\n");
	va_end(ap);
}
