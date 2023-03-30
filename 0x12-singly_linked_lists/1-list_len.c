#include "lists.h"

/**
 * list_len - Function that returns the number
 * of elements in a linked list_t list
 *
 * @h: Pointer to the first node in linked list
 *
 * Return: Returns number of nodes
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
