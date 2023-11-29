#include "lists.h"

/**
 * sum_dlistint - calculates sum of all the data (n)
 * @head: a linked list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
