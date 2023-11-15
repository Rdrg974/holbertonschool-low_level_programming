#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @ap: Argument pointer
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - print an integer
 *
 * @ap: Argument pointer
 */

void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print a float
 *
 * @ap: Argument pointer
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print a string
 *
 * @ap: Argument pointer
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all -  prints anything
 *
 * @format: anything type
 */

void print_all(const char * const format, ...)
{
	print_type types[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list ap;
	char *separator = "";
	int i = 0;
	int j = 0;

	va_start(ap, format);
	while (format && format[i])
	{
		while (types[j].type)
		{
			if (*types[j].type == format[i])
			{
				printf("%s", separator);
				types[j].f(ap);
				separator = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	printf("\n");
	va_end(ap);
}
