#include "listint_t"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h){

	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", p->h);
		h = h->next;
		count++;
	}
	return (count);
}
