#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first node
 * @n: input
 *
 * Return:the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *plus;

	plus = malloc(sizeof(listint_t));
	if (!plus)
		return (NULL);
	plus->n = n;
	plus->next = *head;
	*head = plus;

	return (plus);
}
