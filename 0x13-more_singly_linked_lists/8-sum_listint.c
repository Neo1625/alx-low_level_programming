#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all
 * the data (n) of a listint_t linked list.
 *
 * @head: First node of listint_t
 *
 * Return: Returns sum of all data, 0 otherwise.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

