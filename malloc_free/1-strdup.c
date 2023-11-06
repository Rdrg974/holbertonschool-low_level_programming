#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: a pointer to a char
 *
 * Return: returns a pointer
 */

char *_strdup(char *str)
{
	char *t;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	t = malloc(sizeof(char) * (strlen(str) + 1));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		t[i] = str[i];
	t[i] = '\0';
	return (t);
}
