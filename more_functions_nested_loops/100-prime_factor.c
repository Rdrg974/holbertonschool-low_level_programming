#include <stdio.h>
#include "main.h"

/**
 * main - excute my function
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

int main(void)
{
	prime_factor(612852475143);
	return (0);
}
