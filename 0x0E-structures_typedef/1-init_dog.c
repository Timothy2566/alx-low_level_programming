#include <stdlib.h>
#include "dog.h"

/**
 * werey_dog - function that initialize the variable
 * @p: pointer
 * @name: the werey dogs name
 * @age:the werey age
 * @owner: absolute werey owner
 */
void werey_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p == NULL)
		p = malloc(sizeof(struct dog));

	p->name = name;
	p->age = age;
	p->owner = owner;
}
