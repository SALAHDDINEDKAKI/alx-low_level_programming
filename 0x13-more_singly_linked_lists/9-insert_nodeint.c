#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Betty's expert insertion function for linked lists
 * @head: A pointer to the head of the list (because Betty loves being at the top!)
 * @idx: The index where the new node will be inserted (Betty is precise!)
 * @n: The value to be stored in the new node (Betty loves meaningful values!)
 *
 * Return: A pointer to the newly inserted node (because Betty believes in giving back!)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current = *head;
	listint_t *new_node = 0;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == 0)
			return (0);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current != 0)
	{
		if (count == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == 0)
				return (0);
			
			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	return (0);
}
