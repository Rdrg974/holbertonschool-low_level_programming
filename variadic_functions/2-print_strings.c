#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 *
 * @separator: thing to print between numbers
 * @n: an integer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *mot;
	va_list ap;

	va_start(ap, n);
	for (i = 0, mot = va_arg(ap, char *); i < n; mot = va_arg(ap, char *), i++)
	{
		if (mot == NULL)
			printf("(nil)");
		else
			printf("%s", mot);
		if ((i != (n - 1)) & (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
