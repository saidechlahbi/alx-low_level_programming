#include "lists.h"
/**
 * list_len - Count the number of elements in a linked list_t list.
 * @h: Pointer to the list
 * Return: The number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *node = NULL;

	if (!h)
	{
		return (0);
	}
	node = h;

	while (node != 0)
	{
		node = node->next;
		count++;
	}
	return (count);
}

