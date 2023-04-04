#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees a listint_t list.
 *
 * @head: Head of listint_t.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
