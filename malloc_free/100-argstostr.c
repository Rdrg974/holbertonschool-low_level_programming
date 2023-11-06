#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 *
 * @ac: an integer
 * @av: a pointer to a char
 *
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *t;
	int i, k = 0;
	unsigned int j;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	t = malloc(sizeof(char *) * ac);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			t[k] = av[i][j];
			k++;
		}
		t[k] = '\n';
		k++;
	}
	t[k] = '\0';
	return (t);
}
