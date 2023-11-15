#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters
 *
 * @n: an integer always positive
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
