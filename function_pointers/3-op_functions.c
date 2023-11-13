#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - soustraction
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divition
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: the result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 *
 * @a: an integer
 * @b: an integer
 *
 * Return: the remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
