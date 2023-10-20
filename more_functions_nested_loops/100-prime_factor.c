#include <stdio.h>
#include "main.h"

/**
 * prime_factor - print of the largest prime factor
 *
 * @n: int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void prime_factor(long int n)
{
	int i = 2;
	int vrai = 0;

	while (vrai == 0)
	{
		if ((n % i) == 0)
		{
			n = (n / i);
		}
		else if (n == 1)
			vrai = 1;
		else
			i++;
	}
	printf("%d\n", i);
}

/**
 * main - excute my function prime_factor
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	prime_factor(612852475143);
	return (0);
}
