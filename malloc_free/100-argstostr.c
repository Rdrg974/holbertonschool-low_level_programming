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
	int i, sum = 0, k = 0;
	unsigned int j;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
		sum += strlen(av[i]);
	t = malloc(sizeof(char) * (sum + ac + 1));
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
