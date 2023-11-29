#include "lists.h"

/**
 * sum_dlistint - calculates sum of all the data (n)
 * @head: a linked list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
