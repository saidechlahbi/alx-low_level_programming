#include "lists.h"
/**
 * free_list - Free a list_t list.
 * @head: Pointer to the list
 * Return: None
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}

