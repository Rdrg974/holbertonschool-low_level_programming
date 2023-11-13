#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 *
 * @d: struct dog of type dog_t
 */

void free_dog(dog_t *d)
{
	free(d);
}
