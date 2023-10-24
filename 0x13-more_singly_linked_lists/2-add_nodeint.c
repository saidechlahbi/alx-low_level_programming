#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to struct.
 * @n: data to put it in node.
 * Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *r = NULL;

	r = malloc(sizeof(listint_t));
	if (!r)
	{
		return (NULL);
	}

	r->n = n;
	r->next = *head;
	*head = r;
	return (*head);
}
