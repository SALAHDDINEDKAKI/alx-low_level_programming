#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a given index in a linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the desired node.
 *
 * Return: If the node at the given index is found, return a pointer to that node;
 *         otherwise, return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != 0)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (0);
}
