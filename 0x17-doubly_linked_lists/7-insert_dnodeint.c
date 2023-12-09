#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a
 * given position in a dlistint_t list
 * @h: Pointer to a pointer to the head of the doubly linked list
 * @idx: Index where the new node should be inserted (starting from 0)
 * @n: Integer value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h;
	unsigned int counter = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL && counter < idx - 1)
	{
		temp = temp->next;
		counter++;
	}

	if (temp == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = temp->next;
	newNode->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
