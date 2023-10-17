#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: integer
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		printf("%d", n);
		for (i = (n + 1); i < 99; i++)
		{
			printf(", %d", i);
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
	else
	{
		printf("%d", n);
		for (i = (n - 1); i > 97; i--)
		{
			printf(", %d", i);
		}
		printf("\n");
	}
}
