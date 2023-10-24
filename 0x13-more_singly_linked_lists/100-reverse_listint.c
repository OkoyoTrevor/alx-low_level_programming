#include "lists.h"

/**
 * reverse_listint -reverses a listint_t linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *fro = NULL;
	listint_t *to = NULL;

	while (*head)
	{
		to = (*head)->to;
		(*head)->to = fro;
		fro = *head;
		*head = to;
	}
	*head = fro;
	return (*head);
}
