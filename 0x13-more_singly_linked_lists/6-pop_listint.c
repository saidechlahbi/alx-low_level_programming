#include "lists.h"

/**
 * pop_listint - this function that Delete the head node of the List.
 * @head: A pointer to the address of the
 *        head of the List.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int t;

	if (*head == NULL)
		return (0);

	node = *head;
	t = (*head)->n;
	*head = (*head)->next;

	free(node);

	return (t);
}

