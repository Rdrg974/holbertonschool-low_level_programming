#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: an unsigned integer
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	return (malloc(b));
}
