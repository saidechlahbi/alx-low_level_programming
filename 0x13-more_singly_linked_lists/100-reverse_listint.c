#include "lists.h"

/**
 * reverse_listint -function reverses a listint_t list.
 * @head: A pointer to the head of the list_t list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i, *m;

	if (head == NULL || *head == NULL)
		return (NULL);

	m = NULL;

	while ((*head)->next != NULL)
	{
		i = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = i;
	}

	(*head)->next = m;

	return (*head);
}
