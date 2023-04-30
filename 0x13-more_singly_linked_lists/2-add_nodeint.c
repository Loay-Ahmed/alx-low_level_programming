#include "lists.h"

/**
 * add_node - adds a node to the list
 *
 * @head: pointer to the Head node
 * @str: pointer to the value of the node
 * Return: address of the new node (success), NULL (fail)
 */

list_t *add_node(list_t **head, const char *str)
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
