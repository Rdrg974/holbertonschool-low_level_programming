#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * power - prints power
 *
 * @a: - int
 * @b: - int
 *
 * My function
 *
 * Return: Always a or 1 (Success)
 */

int power(int a, int b)
{
	int i;
	int j = a;

	if (b == 0)
		return (1);
	for (i = 1; i < b; i++)
	{
		a *= j;
	}
	return (a);
}

/**
 * _atoi - convert a string to an integer
 *
 * @s: pointer to an char
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int k = 0;
	int len = strlen(s);
	int moins = 0;
	unsigned int num = 0;

	if (s[0] == '\0')
		return (0);
	while (((s[i] < '0') || (s[i] > '9')) & (s[i] != '\0'))
	{
		if (s[i] == '-')
			moins++;
		i++;
	}
	if (i == len)
		return (0);
	while ((s[i + k] >= '0') & (s[i + k] <= '9'))
		k++;
	for (; k > 0; k--)
	{
		num += (s[i] - '0') * power(10, (k - 1));
		i++;
	}
	if ((moins % 2) == 0)
		return (num);
	return (num *= (-1));
}
