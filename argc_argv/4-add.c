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
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
