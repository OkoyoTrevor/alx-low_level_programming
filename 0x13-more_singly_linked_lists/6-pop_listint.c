#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *met;
	int no;

	if (!head || !*head)
		return (0);

	no = (*head)->n;
	met = (*head)->next;
	free(*head);
	*head = met;

	return (no);
}
