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
void print_dog(struct dog *p);

typedef struct dog dog_t;

void free_dog(dog_t *p);

int _strlen(char *w);
char *_strcpy(char *joy, char *tim);
dog_t *new_dog(char *name, float age, char *owner);

#endif
