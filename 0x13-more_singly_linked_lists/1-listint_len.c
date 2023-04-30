#include "lists.h"

/**
 * listint_len - calculates the number of elements
 *
 * @h: list to count from
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
