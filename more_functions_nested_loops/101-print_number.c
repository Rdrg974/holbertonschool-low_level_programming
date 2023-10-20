#include <stdio.h>
#include "main.h"
#define TRUE 0
#define FALSE 1

/**
 * print_number - prints an integer
 *
 * @n - int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

int log_10(unsigned int n)
{
        int i = 0;

        while (n > 0)
        {
                n /= 10;
                i++;
        }
        return i;
}

int power(int a, int b)
{
	int i;
	int j = a;

	for (i = 1; i < b; i++)
	{
		a *= j;
	}
	return a;
}

void print_number(int n)
{
	int i = 0;

	if (n == 0)
		_putchar('0');
	else if ((n < 0) || (n == INT_MIN))
	{
		n *= (-1);
		i = log_10(n);
		_putchar('-');
		for (; i > 0; i--)
		{
			if (i == 1)
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
