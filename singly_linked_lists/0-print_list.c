#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *ptr = NULL;

	ptr = malloc(sizeof(list_t));
	memcpy(ptr, h, sizeof(list_t));
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			ptr->len = 0;
			ptr->str = "(nil)";
		}
		printf("[%u] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	free(ptr);
	return (count);
}
