#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to an char
 * @src: pointer to an char
 *
 * Return: dest (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i = strlen(src);
	int k = strlen(dest);
	int j;

	for (j = 0; j < i; j++)
		dest[k + j] = src[j];
	for (; j < k; j++)
		dest[k + j] = '\0';
	return (dest);
}
