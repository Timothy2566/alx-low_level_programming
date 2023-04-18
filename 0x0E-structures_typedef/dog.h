#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function that contain the dog basic info
 * @name: the werey name
 * @age: age to initialaize
 * @owner: the werey dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
