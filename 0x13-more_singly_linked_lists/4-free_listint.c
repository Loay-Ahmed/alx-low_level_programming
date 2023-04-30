#include "lists.h"

/**
 * free_listint - frees the memory allocated for the list
 *
 * @head: the start of the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
