#include <stdio.h>
#include "main.h"

int check_if_prime(int n, int new_n);

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: integer
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (check_if_prime(n, 2));
}

/**
 * check_if_prime - check is a number is prime < n
 * @n: integer
 * @new_n: integer
 * Return: int
 */

int check_if_prime(int n, int new_n)
{
	if (new_n >= n && n > 1)
		return (1);
	else if (n % new_n == 0 || n <= 1)
		return (0);
	else
		return (check_if_prime(n, new_n + 1));
}
