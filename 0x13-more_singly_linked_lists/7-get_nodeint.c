#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node
 * of a listint_t linked list.
 *
 * @head: First node of listint_t.
 * @index: Index of the node.
 *
 * Return: If the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;

	unsigned int curr_idx = 0;

	current = head;

	while (current != NULL)
	{
		if (index == curr_idx)
		{
			return (current->n);
		}
		curr_idx++;
		current = current->next;
	}

	return (NULL);
}
