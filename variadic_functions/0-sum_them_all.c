#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum of all its parameters
 * @n: an integer always positive
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
