#include <stdio.h>
#include "main.h"

/**
 * prime_factor - finds and prints the largest prime factor
 *
 * @n: int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void prime_factor(int n)
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

int main()
{
	prime_factor(1231952);
	return 0;
}	
