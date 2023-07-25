#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme
 * Return: Invariably 0
 */

int main(void)
{
	int index = 0;
	int sum = 0;
	int start_half, end_half;
	char password[84];

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';
	
	if (sum != 2772)
	{
		start_half = (sum - 2772) / 2;
		end_half = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			start_half++;
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + start_half))
			{
				password[index] -= start_half;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + end_half))
			{
				password[index] -= end_half;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
