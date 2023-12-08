#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number Of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}
