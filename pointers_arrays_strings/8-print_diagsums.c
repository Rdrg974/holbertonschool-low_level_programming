#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: pointer to an integer
 * @size: integer
 *
 * Not Return
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
		sum1 = sum1 + *(a + i);
	j = size - 1;
	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + *(a + j);
		j += (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
