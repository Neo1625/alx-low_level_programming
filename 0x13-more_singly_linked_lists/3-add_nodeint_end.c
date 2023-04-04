#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: Pointer to the head of listint_t.
 * @n: New number to add.
 *
 * Return: Returns the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (new_node);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}

	return (new_node);
}
