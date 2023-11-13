#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 *
 * @d: struct dog
 * @name: nome of dog
 * @age: age of dog
 * @owner : owner of dog
 *
 * Not Return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
