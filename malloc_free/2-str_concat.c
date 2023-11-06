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
	unsigned int j, l = 0;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	t = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (t == NULL)
		return (NULL);
	for (j = 0; j < (strlen(s1) + strlen(s2)); j++)
	{
		if (j < strlen(s1))
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
