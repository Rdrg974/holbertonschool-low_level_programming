#include <stdio.h>

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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
