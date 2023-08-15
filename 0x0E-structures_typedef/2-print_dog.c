#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog from struct
 * @d: dog to be outputted
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Name: %f\n", d->age);
		printf("Name: %s\n", d->name ? d->owner : "(nil)");
	}
}
