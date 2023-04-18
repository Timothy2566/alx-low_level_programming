#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that print dogs name
 * @p: pointer
 */

void print_dog(struct dog *p)
{
	if (p != NULL)
	{
		if (p->name != NULL)
			printf("Name: %s\n", p->name);

		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", p->age);

		if (p->owner != NULL)
			printf("Owner: %s\n", p->owner);
		else
			printf("Owner: (nil)\n");
	}
}
