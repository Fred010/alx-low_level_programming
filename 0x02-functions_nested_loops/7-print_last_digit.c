#include "main.h"

/**
 * print_last_digit - outputs the last digit of a number
 * @n: the numebr to be examined
 * Return: last digit value
 */

int print_last_digit(int n)
{
	int last_num;

	last_num = n % 10;
	if (last_num < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}
