#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function that returns the lenght of a string
 * @w: function parameter
 * Return: the lenght of the string
 */

int _strlen(char *w)
{
	int t;

	t = 0;

	while (w[t] != '\0')
	{
		t++;
	}

	return (t);
}

/**
 * _strcpy - function that copies the string pointed to by the source
 * @joy: pointer to the buffer
 * @tim: string to be copied
 * Return: the neccessry stuff
 */

char *_strcpy(char *joy, char *tim)
{
	int len, t;

	len = 0;

	while (tim[len] != '\0')
	{
		len++;
	}

	for (t = 0; t < len; t++)
	{
		joy[t] = tim[t];
	}
	joy[t] = '\0';
	return (joy);
}

/**
 * new_dog - function that create a new dog catelog
 * @name: the werey dogs name
 * @age: the odes age
 * @owner: the werey owner of the dog
 * Return: pointer to the new dog (success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int tim1, tim2;

	tim1 = _strlen(name);
	tim2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (tim1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (tim2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
