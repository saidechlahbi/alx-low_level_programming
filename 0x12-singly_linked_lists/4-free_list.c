#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *Last_node;

	while ((Last_node = head) != NULL)
	{
		head = head->next;
		free(Last_node->str);
		free(Last_node);
	}
}
