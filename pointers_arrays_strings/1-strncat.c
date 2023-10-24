#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to an char
 * @src: pointer to an char
 * @n: int
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(src);
	int k = strlen(dest);
	int j;

	for (j = 0; (j < n) & (j < i); j++)
		dest[k + j] = src[j];
	for (; j < k; j++)
		dest[k + j] = '\0';
	return (dest);
}
