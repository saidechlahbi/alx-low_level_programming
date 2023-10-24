#include "lists.h"

/**
 * free_listint_safe -func frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the head of the listint_t list.
 * Return: The Size of the list that was freed.
 * Description: the function sets the Head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *T;
	size_t node, loop;

	node = list_looper(*h);

	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			T = (*h)->next;
			free(*h);
			*h = T;
		}
	}

	else
	{
		for (loop = 0; loop < node; loop++)
		{
			T = (*h)->next;
			free(*h);
			*h = T;
		}

		*h = NULL;
	}

	h = NULL;

	return (node);
}
