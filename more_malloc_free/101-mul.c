#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 *
 * @ac: number
 * @av: pointer of array to a char
 *
 * Return: Always 0 (Success)
 */

int main(int ac, char *av[])
{
	int i = 1, j, mul = 1;

	if (ac < 3)
	{
		printf("Error\n");
		exit(98);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if ((av[i][j] < '0') || (av[i][j] > '9'))
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
		mul *= atoi(av[i]);
		i++;
	}
	printf("%d\n", mul);
	return (0);
}
