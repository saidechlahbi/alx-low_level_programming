#include "lists.h"
#include  <stdio.h>
#include <stdlib.h>
/**
 * print_listint -a function that prints all the elements of a list of type int_t.
 *
 * @h:a pointer of the head of the list_t.
 *
 * return: return the number of all the nodes.
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t counter = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
