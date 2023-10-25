#include "lists.h"

/**
 * sum_listint - Betty's favorite function to calculate the sum of a linked list
 * @head: A pointer to the head of the list (Betty is never headless!)
 *
 * Return: Sum of all the integers in the list (because Betty loves adding up numbers!)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != 0)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
