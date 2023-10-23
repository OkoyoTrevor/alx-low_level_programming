#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: first node in the linked list
 *
 * Return: resulting sum;0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *met = head;

	while (met)
	{
		sum += met->n;
		met = met->next;
	}
	return (sum);
}
