#include "lists.h"

/**
 * free_listint2 - frees the memory allocated for the list
 *
 * @head: the start of the list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head)
	{
		current = *head;
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
