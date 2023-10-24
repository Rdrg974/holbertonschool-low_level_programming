#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to an char
 * @src: pointer to char
 * @n: int
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = strlen(src);
	int j;

	for (j = 0 ; (j < n) && (j < i) ; j++)
		dest[j] = src[j];
	if (j == i)
	{
		for ( ; i < n ; i++)
			dest[i] = '\0';
	}
	return (dest);
}
