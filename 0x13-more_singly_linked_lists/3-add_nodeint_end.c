#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to struct.
 * @n: data to put it in node.
 * Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t = NULL;
	listint_t *node;

	t = malloc(sizeof(listint_t));
	if (!t)
		return (NULL);

	t->n = n;
	t->next = NULL;
	if (*head == NULL)
	{
		*head = t;
		return (t);
	}
	node = *head;
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = t;
	return (t);
}
