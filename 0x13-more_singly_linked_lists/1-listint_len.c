#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list.
 * @h: pointer to struct
 * Return: the number of nodes.
*/
size_t listint_len(const listint_t *h)
{
	int t = 0;
	const listint_t *p = NULL;

	p = h;
	while (p != NULL)
	{
		p = p->next;
		t++;
	}
	return (t);
}
