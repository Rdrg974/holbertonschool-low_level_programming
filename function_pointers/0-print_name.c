#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: a pointer to char
 * @f: a pointer to a functions
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
