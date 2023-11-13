#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: new name of dog
 * @age: new age of dog
 * @owner: new owner of dog
 *
 * Return: a pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nwdog;

	nwdog = malloc(sizeof(dog_t));
	if (nwdog == NULL)
		return (NULL);
	if ((name == NULL) || (owner == NULL))
		return (NULL);
	nwdog->name = name;
	nwdog->age = age;
	nwdog->owner = owner;
	return (nwdog);
}
