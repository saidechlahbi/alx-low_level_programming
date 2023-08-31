#include "lists.h"

/**
 * free_listint2 - this function that Frees a List.
 * @head: A pointer to the address of the
 *        head of the List.
 *
 * Description: Sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}

	head = NULL;
}
