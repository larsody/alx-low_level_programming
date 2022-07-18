#include "lists.h"
#include <stdio.h>
/**
 *  print_listint - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		num_nodes++;
	}
	return (num_nodes);
}
