#include "lists.h"

/**
 * add_nodeint - adds a node to the list
 *
 * @head: pointer to the Head node
 * @n: pointer to the value of the node
 * Return: address of the new node (success), NULL (fail)
 */

listnt_t *add_nodeint(list_t **head, const int n)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
