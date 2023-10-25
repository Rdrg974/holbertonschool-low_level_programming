#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to a char
 * @b: char
 * @n: unsigned int
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
