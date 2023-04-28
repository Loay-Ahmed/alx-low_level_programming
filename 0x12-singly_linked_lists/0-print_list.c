#include "lists.h"

/**
 * print_list - prints the values of the list
 *
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
