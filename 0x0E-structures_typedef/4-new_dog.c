#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _str_length - finds the length of a string
 * @str: string
 *
 * Return: length
 */

int _str_length(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _str_copy - copies string from source
 * @src: source of string
 * @dest: string destination
 *
 * Return: dest
 */

char *_str_copy(char *dest, char *src)
{
	int id;

	for (id = 0; src[id]; id++)
		dest[id] = src[id];
	dest[id] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: points to NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_str_length(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_str_length(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _str_copy(dog->name, name);
	dog->age = age;
	dog->owner = _str_copy(dog->owner, owner);

	return (dog);
}
