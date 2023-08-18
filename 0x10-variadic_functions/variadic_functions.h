#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct _token - make token struct
 * @_token: format token
 * @f: associated function
 */

typedef struct _token
{
	char *_token;
	void (*f)(char *, va_list);
} _token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
