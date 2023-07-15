#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Invariably 0 (Feat)
 */

int main(void)
{
	int nums;

	for (nums = 0; nums < 10; nums++)
	{
		putchar(nums + '0');
		if (nums < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
