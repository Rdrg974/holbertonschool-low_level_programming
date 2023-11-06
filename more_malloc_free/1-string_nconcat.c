#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: a pointer to a char
 * @s2: a pointer to a char
 * @n: an unsigned integer
 *
 * Return: returned pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, l = 0;
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	t = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (t == NULL)
		return (NULL);
	for (j = 0; j < (strlen(s1) + n); j++)
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
