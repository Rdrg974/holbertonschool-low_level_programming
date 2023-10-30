#include <stdio.h>
#include "main.h"

/**
 * prime - returns if the input integer is a prime number
 *
 * @n: an integer
 * @i: an integer
 *
 * Return: j
 */

int prime(int n, int i)
{
	int j = 0;

	if (n == 1)
		return (j);
	else if ((n % i) == 0)
	{
		j++;
		return (j + prime((n / i), i));
	}
	return (prime(n, (i + 1)));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: an integer
 *
 * Return: 1
 */

int is_prime_number(int n)
{
	int r = 0;

	if ((n == 1) || (n < 0))
		return (r);
	r = prime(n, 2);
	if (r <= 1)
		return (1);
	return (0);
}
