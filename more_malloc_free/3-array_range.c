#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 *
 * @min: values min
 * @max: values max
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *t;

	if (min > max)
		return (NULL);
	t = malloc(sizeof(int) * (max - min + 1));
	if (t == NULL)
		return (NULL);
	for (; min <= max; min++)
	{
		t[i] = min;
		i++;
	}
	return (t);
}
