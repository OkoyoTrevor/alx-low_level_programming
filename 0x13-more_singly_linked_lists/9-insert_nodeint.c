#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return:the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *plus;
	listint_t *temp = *head;

	plus = malloc(sizeof(listint_t));
	if (!plus || !head)
		return (NULL);

	plus->n = n;
	plus->next = NULL;

	if (idx == 0)
	{
		plus->next = *head;
		*head = plus;
		return (plus);
	}
	for (p = 0; temp && p < idx; p++)
	{
		if (p == idx - 1)
		{
			plus->next = temp->next;
			temp->next = plus;
			return (plus);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
