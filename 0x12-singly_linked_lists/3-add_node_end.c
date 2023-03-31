#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Function that adds new node at
 * the end of a list)t list.
 *
 * @head: Head of a singl linked list.
 * @str: String to insert.
 *
 * Return: Returns the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}


