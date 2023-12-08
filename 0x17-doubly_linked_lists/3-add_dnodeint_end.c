#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Pointer to a pointer to the head of the doubly linked list
 * @n: Integer value to be stored in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
