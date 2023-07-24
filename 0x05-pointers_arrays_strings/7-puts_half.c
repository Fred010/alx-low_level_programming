#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be used
 * Return: new line
 */

void puts_half(char *str)
{
	int m1 = 0;
	int m2;

	while (str[m1] != '\0')
	{
		m1++;
	}
	if (m1 % 2 == 1)
	{
		m2 = (m1 - 1) / 2;
		m2 += 1;
	}
	else
	{
		m2 = m1 / 2;
	}
	for (; m2 < m1; m2++)
	{
		_putchar(str[m2]);
	}
	_putchar('\n');
}
