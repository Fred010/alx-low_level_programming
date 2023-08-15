#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines dog struct
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 *
 * Description: long struct for more definitions
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
