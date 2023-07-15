#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Invariably 0 (Feat)
 */

int main(void)
{
	int m1, m2;

	for (m1 = '0'; m1 < '9'; m1++)
	{
		for (m2 = m1 + 1; m2 <= '9'; m2++)
		{
			if (m2 != m1)
			{
				putchar(m1);
				putchar(m2);
				if (m1 == '8' && m2 == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
