#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to a char
 * @b: pointer to a char
 * @n: unsigned it
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

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
	p = _memset(p, '\0', nmemb * size);
	return (p);
}
