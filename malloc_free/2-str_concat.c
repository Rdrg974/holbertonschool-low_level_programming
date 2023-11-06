#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to a char
 * @s2: pointer to a char
 *
 * Return: concatenates two strings
 */

char *str_concat(char *s1, char *s2)
{
	int i = strlen(s1);
	int k = strlen(s2);
	int j, l = 0;
	char *t;

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	t = malloc(sizeof(char) * (i + k + 1));
	if (t == NULL)
		return (NULL);
	for (j = 0; j < (i + k); j++)
	{
		if (j < i)
			t[j] = s1[j];
		else
		{
			t[j] = s2[l];
			l++;
		}
	}
	t[j] = '\0';
	return (t);
}
