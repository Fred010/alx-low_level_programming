#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Invariably 0 (Feat)
 */

int main(void)
{
	char alpha_low;
	char alpha_up;

	alpha_low = 'a';
	alpha_up = 'A';
	while
		(alpha_low <= 'z') {
			putchar(alpha_low);
			alpha_low++;
		}
	while
		(alpha_up <= 'Z') {
			putchar(alpha_up);
			alpha_up++;
		}
	putchar('\n');
	return (0);
}
