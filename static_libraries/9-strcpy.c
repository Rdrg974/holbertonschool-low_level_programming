#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: pointer to an char
 * @src: pointer to an char
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = strlen(src);
	int k = strlen(dest);
	int j;

	for (j = 0; j < i; j++)
		dest[j] = src[j];
	for (; j < k; j++)
		dest[j] = '\0';
	return (dest);
}
