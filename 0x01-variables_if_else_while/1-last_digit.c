#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: Invariably 0 (Feat)
 */


int main(void)
{
	int f;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	f = n % 10;
	if (f > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, f);
	if (f == 0)
		printf("Last digit of %d is %d and is 0\n", n, f);
	if (f < 6 && f != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, f);
	return (0);
}
