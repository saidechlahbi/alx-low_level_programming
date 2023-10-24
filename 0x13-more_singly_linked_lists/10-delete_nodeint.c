#include "lists.h"
/**
 * delete_nodeint_at_index -   function that deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to struct.
 * @index: is the index of the node.
 * Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t;
	listint_t *h = *head;
	unsigned int i;

	if (h == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	i = 0;
	while (i < index - 1)
	{
		if (h == NULL || h->next == NULL)
			return (-1);
		h = h->next;
		i++;
	}
	t = h->next;
	h->next = t->next;
	free(t);
	return (1);
}
