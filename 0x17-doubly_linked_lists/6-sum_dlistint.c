#include "lists.h"

/**
 * sum_dlistint - returns the sum1 of all the data (n)
 * of a dlistint_t linked list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: sum1 of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum1 = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum1 += current->n;
		current = current->next;
	}

	return (sum1);
}
