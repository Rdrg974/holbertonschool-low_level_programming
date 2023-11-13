#ifndef __DOG__H__
#define __DOG__H__

/**
 * dog_t - Typedef for struct dog
 *
 * @name: first argument
 * @age: second argument
 * @owner: third argument
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
