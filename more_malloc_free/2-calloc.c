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
	void *p;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	p = memset(p, 0, nmemb);
	return (p);
}
