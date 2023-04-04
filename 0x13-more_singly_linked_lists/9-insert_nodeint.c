#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts
 * a node at a given position.
 *
 * @head: Pointer to the first node of listint_t.
 * @idx: Index of the list where the new node should be added.
 * @n: Integer number ot insert.
 *
 * Return: Returns the address of the new node, NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next;
	listint_t *current;
	int curr_idx = 0;

	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			if (curr_idx == idx)
			{
				next = current->next;
				new_node->next;
				current->next = new_node;

				return (new_node);
			}
			else
			{
				current = current->next;
				curr_idx++;
			}
		}
	}
	return (NULL);
}
