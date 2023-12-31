#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a
 * given position in a dlistint_t list
 * @head: pointer to a pointer to the head of the doubly linked list
 * @index: index of the node to be deleted (starting from 0)
 *
 * Return: 1 if the deletion succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && counter < index)
	{
		current = current->next;
		counter++;
	}

	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
