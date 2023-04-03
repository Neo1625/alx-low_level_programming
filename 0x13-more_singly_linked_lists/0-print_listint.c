#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: Head of the singly linked lists.
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->next);
		num_of_nodes++;

		h = h->next;
	}

	return (num_of_nodes);
}
