#ifndef DOG_H
#define DOG_H

/**
 * struct dog - listing dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
