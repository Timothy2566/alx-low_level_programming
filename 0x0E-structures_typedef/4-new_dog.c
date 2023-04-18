#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that create a new dog
 * @name: the werey dogs name
 * @age: the werey dog name
 * @owner: the werey dog owner
 *
 * Return: the necccessry output
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int num1, num2, t;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (num1 = 0; name(num1); num1++)
		;
	num1++;
	dog->name = malloc(num1 = sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (t = 0; t < num1; t++)
		dog->name(t) = name(t);
	dog->age = age;
	for (num2 = 0; owner[num2]; num1++)
		;
	num2++;
	dog->owner = malloc(num2 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (t = 0; t < num2; t++)
		dog->owner[t] = owner[t];
	return (dog);
}
