#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Starting point
 *
 * Return: Invariably 0 (Feat)
 */

int main(void)
{
	int m1, m2;

	for (m1 = 0; m1 <= 98; m1++)
	{
		for (m2 = m1 + 1; m2 <= 99; m2++)
		{
			putchar((m1 / 10) + '0');
			putchar((m1 % 10) + '0');
			putchar(' ');
			putchar((m2 / 10) + '0');
			putchar((m2 % 10) + '0');
			if (m1 == 98 && m2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
