#include "lists.h"

/**
 * add_nodeint - adds a node to the list
 *
 * @head: pointer to the Head node
 * @n: pointer to the value of the node
 * Return: address of the new node (success), NULL (fail)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
