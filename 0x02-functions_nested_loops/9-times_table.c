#include "main.h"

/**
 * times_table - prints the 9 times table, beginning with 0
 * Return: null output
 */

void times_table(void)
{
	int m1, m2, m3, m4, m5;

	for (m1 = 0; m1 <= 9; m1++)
	{
		for (m2 = 0; m2 <= 9; m2++)
		{
			m3 = m1 * m2;
			if (m3 > 9)
			{
				m4 = m3 % 10;
				m5 = (m3 - m4) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(m5 + '0');
				_putchar(m4 + '0');
			}
			else
			{
				if (m2 != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(m3 + '0');
			}
		}
		_putchar('\n');
	}
}
