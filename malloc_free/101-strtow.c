#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * numbword - count the number of words
 *
 * @str: pointer to a char
 *
 * Return: number of words
 */

int numbword(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			if ((str[i + 1] == ' ') || (str[i + 1] == '\0'))
				j++;
		i++;
	}
	return (j);
}

/**
 * tabempty - create an array empty
 *
 * @str: pointer to a char
 * @size: an integer
 *
 * Return: an array
 */

char **tabempty(char *str, int size)
{
	int j, l, c = 0;
	char **t;

	t = malloc(sizeof(str) * (size + 1));
	if (t == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		l = 0;
		if (str[j] != ' ')
		{
			for (; (str[j] != ' '); j++)
				l++;
			t[c] = malloc(sizeof(char) * (l + 1));
			if (t[c] == NULL)
			{
				for (--c; c >= 0; c--)
					free(t[c]);
				free(t);
				return (NULL);
			}
			c++;
		}
	}
	return (t);
}

/**
 * strtow - splits a string into words
 *
 * @str: pointer to a char
 *
 * Return: a pointer to an array of strings
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, l = 0;
	char **t;

	if ((str == NULL) || (*str == 0))
		return (NULL);
	i = numbword(str);
	if (i == 0)
		return (NULL);
	t = tabempty(str, i);
	while (str[j] != '\0')
	{
		if (str[j] != ' ')
		{
			t[k][l] = str[j];
			l++;
			if ((str[j + 1] == ' ') || (str[j + 1] == '\0'))
			{
				t[k][l + 1] = '\0';
				k++;
				l = 0;
			}
		}
		j++;
	}
	t[k] = NULL;
	return (t);
}
