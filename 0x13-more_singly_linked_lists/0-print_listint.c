#include "lists.h"
#include  <stdio.h>
#include <stdlib.h>

/**
 * print_listint - a function that prints all the elements 
 * of a list of type int_t.
 *
 * @h: a pointer to the head of the list_t.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
