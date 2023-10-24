#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to struct.
 * Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	int t = 0;
	const listint_t *p = NULL;

	p = h;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		t++;
	}
	return (t);
}
