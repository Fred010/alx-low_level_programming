#include "main.h"
/**
 *jack_bauer - prints every minute of the day of Jack Bauer 
 *Return: --:--
 */

void jack_bauer(void)
{
	int t1, t2, t3, t4;

	for (t1 = 0; t1 <= 2; t1++)
	{
		for (t2 = 0; t2 <= 9; t2++)
		{
			if ((t1 <= 1 && t2 <= 9) || (t1 <= 2 && t2 <= 3))
			{
				for (t3 = 0; t3 <= 5; t3++)
				{
					for (t4 = 0; t4 <= 9; t4++)
					{
						_putchar(t1 + '0');
						_putchar(t2 + '0');
						_putchar(58);
						_putchar(t3 + '0');
						_putchar(t4 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
