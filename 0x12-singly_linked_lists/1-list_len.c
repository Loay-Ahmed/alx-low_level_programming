#include "lists.h"

/**
 * list_len - prints the values of the list
 *
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
