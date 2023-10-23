#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to an integer
 * @b: pointer to an integer
 *
 * Not Return
 */

void swap_int(int *a, int *b)
{
	int temporary;

	temporary = *b;
	*b = *a;
	*a = temporary;
}
