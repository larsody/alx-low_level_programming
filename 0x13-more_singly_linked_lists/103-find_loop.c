#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current;
	listint_t *prev;

	current = head;
	prev = head;
	while (head && current && current->next)
	{
		head = head->next;
		current = current->next->next;

		if (head == current)
		{
			head = prev;
			prev =  current;
			while (1)
			{
				current = prev;
				while (current->next != head && current->next != prev)
				{
					current = current->next;
				}
				if (current->next == head)
					break;

				head = head->next;
			}
			return (current->next);
		}
	}

	return (NULL);
}
