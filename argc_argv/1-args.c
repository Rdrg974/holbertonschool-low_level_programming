#include <stdio.h>

/**
 * main - print its name
 *
 * @argc: an integer
 * @argv: pointer to a char
 *
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
