#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_element = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		num_element++;
	}
	return (num_element);
}
