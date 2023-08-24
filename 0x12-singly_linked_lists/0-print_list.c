#include "lists.h"
#include <stdio.h>

/**
* print_list : prints all the elements of a list_t list.
* h : singly linked list
* return :  the number of nodes
*/

size_t print_list(const list_t *h)
{
		size_t Nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "No string available");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		Nodes++;
	}
	return (Nodes);
}

