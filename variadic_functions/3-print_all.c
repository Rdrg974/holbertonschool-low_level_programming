#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all -  prints anything
 *
 * @format: anything type
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char c;
	double f;
	char *s, type;

	va_start(ap, format);
	while ((type = format[i]) != '\0')
	{
		if (type == 'c')
		{
			c = va_arg(ap, int);
			printf("%c", c);
		}
		else if (type == 'f')
		{
			f = va_arg(ap, double);
			printf("%f", f);
		}
		else if (type == 'i')
		{
			j = va_arg(ap, int);
			printf("%d", j);
		}
		else if (type == 's')
		{
			s = va_arg(ap, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		if (format[i + 1] != '\0')
			if ((type == 'c') || (type == 'f')
			|| (type == 'i') || (type == 's'))
				printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
