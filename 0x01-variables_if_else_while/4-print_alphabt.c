#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Invariably 0 (Feat)
 */

int main(void)
{
	char alpha_low;

	alpha_low = 'a';
	while
		(alpha_low <= 'z') {
			if ((alpha_low != 'q' && alpha_low != 'e') && alpha_low <= 'z')
				putchar(alpha_low);
			alpha_low++;
		}
	putchar('\n');
	return (0);
}
