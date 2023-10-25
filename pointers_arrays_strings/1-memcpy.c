#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: unsigned n
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest - n);
}
