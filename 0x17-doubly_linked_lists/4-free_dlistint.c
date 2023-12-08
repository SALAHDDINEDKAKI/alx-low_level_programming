#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: P ointer to the head of the doubly linked list
 *
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
