#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - Function that returns the number of elements in a linked list
 * listint_t list.
 *
 * @h: Head of linked listint_t list.
 *
 * Return: Returns the number of elements in listint_t
 */
size_t listint_len(const listint_t *h)
{
	int num_of_nodes = 0;

	while (h != NULL)
	{
		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}
