#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	size_t len_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (len_str = 0; str[len_str]; len_str++)
		;

	new_node->len = len_str;
	new_node->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (*head);
}
