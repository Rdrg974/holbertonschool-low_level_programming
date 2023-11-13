#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: pointer to an char
 * @src: pointer to an char
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = strlen(src);
	int j;

	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}

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
		return (NULL);
	_strcpy(nwdog->name, name);
	nwdog->age = age;
	nwdog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (nwdog->owner == NULL)
		return (NULL);
	_strcpy(nwdog->owner, owner);
	return (nwdog);
}
