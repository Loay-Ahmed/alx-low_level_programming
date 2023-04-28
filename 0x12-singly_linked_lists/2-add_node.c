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
	char *str_dup;
	int len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;

	new->str = str_dup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
