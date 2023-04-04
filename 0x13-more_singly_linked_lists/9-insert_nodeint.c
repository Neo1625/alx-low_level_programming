#include "lists.h"

/**
 * listint_len - Function that retursn the number
 * of elements in listint_t.
 * @h: Pointer to listint_t
 *
 * Return: Number of elements in listint_t
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
 * insert_nodeint_at_index - Function that adds a new node at a
 * given position.
 *
 * @head: Pointer to the first node of listint_t.
 * @idx: Index of the list where the new node
 * should be added.
 * @n: Integer to add.
 *
 * Return: Returns the address of the new node, or
 * NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t len;
	unsigned int i;
	listint_t *new_node;
	listint_t *current = *head;

	len = listint_len(*head);

	if (idx > len)
	{
		return (NULL);
	}

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

