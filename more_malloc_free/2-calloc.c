#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  allocates memory for an array
 *
 * @nmemb: n element in an array
 * @size: an unsigned integer
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if ((nmemb == 0) || (size == 0))
		return (NULL);
	if (malloc(size * nmemb) == NULL)
		return (NULL);
	return (memset(malloc(size * nmemb), 0, nmemb));
}
