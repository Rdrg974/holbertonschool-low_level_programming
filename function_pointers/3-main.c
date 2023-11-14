#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - performs simple operations
 *
 * @ac: an integer
 * @av: pointer to a char
 *
 * Return: Always 0 (Success)
 */

int main(int ac, char *av[])
{
	int res;
	int n1 = 0, n2 = 0;
	char *operator;

	if (ac < 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = malloc(sizeof(char) * (strlen(av[2]) + 1));
	strcpy(operator, av[2]);
	if ((strcmp(operator, "+") != 0) & (strcmp(operator, "-") != 0) &
	(strcmp(operator, "*") != 0) & (strcmp(operator, "/") != 0) &
	(strcmp(operator, "%") != 0))
	{
		printf("Error\n");
		return (99);
	}
	n1 = atoi(av[1]);
	n2 = atoi(av[3]);
	if (((strcmp(operator, "/") == 0) || (strcmp(operator, "%") == 0)) &
	(n2 == 0))
	{
		printf("Error\n");
		return (100);
	}
	res = get_op_func(operator)(n1, n2);
	printf("%d\n", res);
	free(operator);
	return (0);
}
