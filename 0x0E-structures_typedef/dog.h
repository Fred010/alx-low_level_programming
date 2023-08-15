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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _str_length(const char *str);
char *_str_copy(char *dest, char *src);

#endif
