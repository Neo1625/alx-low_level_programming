#include "lists.h"

/**
 * listint_len - Function that returns the no of elements in
 * a listint_t len
 *
 * @h: Pointer to a listint
 *
 * Return: Number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}

/**
 * delete_nodeint_at_index - Function that deleted the node at index
 * 'index' of a listint_t linked list.
 *
 * @head: Pointer to the first node of listint_t.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node;
	listint_t *current;
	size_t len = listint_len(*head);
	int i = 0;

	if (index > len)
	{
		return (-1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = NULL;
		free(*head);
		return (-1);
	}

	prev_node = *head;
	for (i = 0; i < index - 1; i++)
	{
		prev_node = prev_node->next;
	}
	current = prev_node->next;
	prev_node->next = current->next;
	current->next = NULL;
	return (1);
}
