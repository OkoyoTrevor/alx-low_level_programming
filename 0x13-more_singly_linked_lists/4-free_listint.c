#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head:list to be freed
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *met;

	while (head)
	{
		met = head->next;
		free(head);
		head = met;
	}
}
