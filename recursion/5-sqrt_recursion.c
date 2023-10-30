#include <stdio.h>
#include "main.h"

/**
 * racine2 - returns the natural square root of a number
 *
 * @n: an integer
 * @i: an integer
 *
 * Return: an integer
 */

int racine2(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (i > n)
		return (-1);
	return (racine2(n, (i + 1)));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: an integer
 *
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	i = racine2(n, 0);
	return (i);
}
