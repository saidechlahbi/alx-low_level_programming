#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts a new node at
 * a given position.
 * @head: pointer to struct.
 * @idx: index of the list.
 * @n: pointer to struct.
 * Return: the address of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t;
	listint_t *h;
	unsigned int i;

	t = malloc(sizeof(listint_t));
	if (!t)
		return (NULL);
	t->n = n;
	h = *head;
	if (idx == 0)
	{
		t->next = h;
		(*head) = t;
		return (t);
	}
	i = 0;
	while (i < idx - 1)
	{
		if ((*head) == NULL || (*head)->next == NULL)
			return (NULL);
		h = h->next;
		i++;
	}
	t->next = h->next;
	h->next = t;
	return (t);
}
