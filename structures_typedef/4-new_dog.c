#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	nwdog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (nwdog->name == NULL)
	{
		free(nwdog);
		return (NULL);
	}
	strcpy(nwdog->name, name);
	nwdog->age = age;
	nwdog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (nwdog->owner == NULL)
	{
		free(nwdog->name);
		free(nwdog);
		return (NULL);
	}
	strcpy(nwdog->owner, owner);
	return (nwdog);
}
