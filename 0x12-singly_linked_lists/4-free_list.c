#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees memory allocated for a linked list.
 * @head: A pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
