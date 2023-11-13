#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *
 * @array: an array
 * @size: size of the array
 * @action: a pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if ((array != NULL) & (action != NULL))
		for (i = 0; i < size; i++)
			action(array[i]);
}
