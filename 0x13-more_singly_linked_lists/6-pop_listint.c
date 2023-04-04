#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node
 * of a listint_t of a linked list
 *
 * @head: Poitner to the head of listint_t
 *
 * Return: Returns the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		val = temp->n;
		*head = (*head)->next;
		free(temp);

		return (val);
	}
}
