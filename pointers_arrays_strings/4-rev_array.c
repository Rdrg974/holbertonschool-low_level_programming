#include <stdio.h>
#include <string.h>

/**
 * reverse_array - everses the content of an array of integers
 *
 * @a: pointer to an int
 * @n: int
 *
 * Not Return
 */

void reverse_array(int *a, int n)
{
	int *rev, t;
	int j;

	rev = a;
	for (j = 0; j < (n - 1); j++)
		rev++;
	for (j = 0; j < (n / 2); j++)
	{
		t = *rev;
		*rev = *a;
		*a = t;
		rev--;
		a++;
	}
}
