#include "lists.h"

/**
 * get_nodeint_at_index - this function that returns the nth node
 *                          of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node - indices start from 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int new;

	for (new = 0; new < index; new++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
