#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Function that adds a new node at the beginning of
 * a listint_t list.
 *
 * @head: Pointer to the head of listint_t.
 * @n: New number to add.
 *
 * Return: Returns the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
