#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its name
 *
 * @argc: an integer
 * @argv: pointer to a char
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
