#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list_t list.
 *
 * @head: head of singly linked list.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list *current = head;
	list *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
