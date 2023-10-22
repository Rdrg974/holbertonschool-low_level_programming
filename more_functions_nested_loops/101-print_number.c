#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * log_10 - prints log10
 *
 * @n: - int
 *
 * My function
 *
 * Return: Always i (Success)
 */

int log_10(int n)
{
	int i = 0;

	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/**
 * power - prints power
 *
 * @a: - int
 * @b: - int
 *
 * My function
 *
 * Return: Always a (Success)
 */

int power(int a, int b)
{
	int i;
	int j = a;

	for (i = 1; i < b; i++)
	{
		a *= j;
	}
	return (a);
}

/**
 * print_number - prints an integer
 *
 * @n: - int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	int i = 0;

	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		if (n == INT_MIN)
			n = INT_MAX;
		else
			n *= (-1);
		i = log_10(n);
		_putchar('-');
		for (; i > 0; i--)			
		{
			if ((i == 1) & (n == INT_MAX))
				_putchar('8')
			else if (i == 1)
				_putchar('0' + (n % 10));
			else
				_putchar('0' + ((n / (power(10, (i - 1)))) % 10));
		}
	}
	else
	{
		i = log_10(n);
		for (; i > 0; i--)
		{
			if (i == 1)
				_putchar('0' + (n % 10));
			else
				_putchar('0' + ((n / (power(10, (i - 1)))) % 10));
		}
	}
}
