#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num_element = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		num_element++;
	}
	return (num_element);
}
