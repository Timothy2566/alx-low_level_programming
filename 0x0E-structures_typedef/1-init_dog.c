#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize the variable
 * @p: pointer
 * @name: the werey dogs name
 * @age:the werey age
 * @owner: absolute werey owner
 */
void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p == NULL)
		p = malloc(sizeof(struct dog));

	p->name = name;
	p->age = age;
	p->owner = owner;
}
