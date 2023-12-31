#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *met;

	if (head == NULL)
		return;

	while (*head)
	{
		met = (*head)->next;
		free(*head);
		*head = met;
	}
	*head = NULL;
}
