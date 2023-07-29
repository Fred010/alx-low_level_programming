#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14, followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int tens = i / 10;
			int ones = i % 10;

			if (tens > 0)
			{
				_putchar('0' + tens);
			}

			_putchar('0' + ones);
		}

		_putchar('\n');
	}
}
