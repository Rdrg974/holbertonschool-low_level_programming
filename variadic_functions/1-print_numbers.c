#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: a const pointer to a char
 * @n: a const integer always positive
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		exit(98);
	if (separator != NULL)
	{
		va_start(ap, n);
		for (i = 0; i < n ; i++)
		{
			if (i == (n - 1))
				printf("%d", va_arg(ap, int));
			else
				printf("%d%s ", va_arg(ap, int), separator);
		}
		va_end(ap);
	}
	printf("\n");
}
