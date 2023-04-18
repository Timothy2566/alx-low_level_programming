#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that freees allocated for dog struct
 * @p: the struct to b freed
 */

void free_dog(dog_t *p)
{
	if (p)
	{
		free(p->name);
		free(p->owner);
		free(p);
	}
}
