#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: Invariably 0 (Feat)
 */

int main(void)
{
	int num;
	char low_case;

	num = 0;
	low_case = 'a';
	while
		(num < 10) {
			putchar(num + '0');
			num++;
		}
	while
		(low_case <= 'f') {
			putchar(low_case);
			low_case++;
		}
	putchar('\n');
	return (0);
}
