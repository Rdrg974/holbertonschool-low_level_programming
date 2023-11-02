#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *
 * @argc: an integer
 * @argv: pointer to a char
 *
 * Return: an integer
 */

int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if ((argv[1][0] < '0') || (argv[1][0] > '9'))
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	if (sum <= 0)
		printf("%d\n", 0);
	else
	{
		while (sum != 0)
		{
			if (sum >= 25)
				sum -= 25;
			else if ((sum < 25) & (sum >= 10))
				sum -= 10;
			else if ((sum < 10) & (sum >= 5))
				sum -= 5;
			else if ((sum < 5) & (sum >= 2))
				sum -= 2;
			else
				sum -= 1;
			i++;
		}
		printf("%d\n", i);
	}
	return (0);
}
