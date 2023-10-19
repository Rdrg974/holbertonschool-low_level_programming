#include <stdio.h>
#include "main.h"

/**
 * print_to_hundred - prints the numbers 
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_to_hundred(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) & (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
}
