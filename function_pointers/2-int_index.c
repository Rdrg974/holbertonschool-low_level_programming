#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 *
 * @array: an array to integer
 * @size: size of array
 * @cmp: function pointers
 *
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if ((array != NULL) & (cmp != 0))
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (-1);
}
