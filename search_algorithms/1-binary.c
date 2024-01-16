#include "search_algos.h"

void print_array(int *array, int i, int j)
{
	printf("Searching in array: ");
	while (i <= j)
	{
		printf("%d", array[i]);
		i++;
		if (i <= j)
			printf(" ");
	}
	printf("\n");
}

/**
 * binary_search - that searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1;
	int half = 0;

	if (array)
		while (i <= j)
		{
			print_array(array, i, j);
			half = (i + j) / 2;
			if (array[half] < value)
				i = half + 1;
			else if (array[half] > value)
				j = half - 1;
			else
				return (half);


		}
	return (-1);
}
