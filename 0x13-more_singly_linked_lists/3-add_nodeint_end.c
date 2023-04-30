#include "lists.h"

/**
 * add_nodeint_end - adds a node to the
 * end of the list
 *
 * @head: the start of the list
 * @n: the value to be add to the node
 * Return: address of the new node (success), NULL (fail)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	(void)temp;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head != NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
