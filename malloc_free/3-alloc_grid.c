#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - a 2 dimensional array of integers
 *
 * @width: an integr
 * @height: an integer
 *
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **t;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	t = malloc(sizeof(int) * height);
	for (i = 0; i < height; i++)
		t[i] = malloc(sizeof(int) * width);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	return (t);
}
