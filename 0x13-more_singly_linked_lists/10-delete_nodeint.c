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
	size_t len;
	unsigned int i;
	listint_t *temp;
	listint_t *prev_node = *head;

	len = listint_len(*head);

	if (index >= len)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		prev_node = prev_node->next;
	}
	temp = prev_node;
	prev_node = prev_node->next;
	temp->next = prev_node->next;
	free(prev_node);
	return (1);
}
