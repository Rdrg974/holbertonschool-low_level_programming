#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: pointer to an integer
 * @n: int
 *
 * Not Return
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < (n - 1); i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[i]);
	}
}
