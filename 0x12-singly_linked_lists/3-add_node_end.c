#include "lists.h"
/**
 * add_node_end - Add a new node to the end of a list_t list.
 * @head: Pointer to the list
 * @str: Pointer to a string
 * Return: The updated number of nodes in the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *end;


	node = (list_t *) malloc(sizeof(list_t));
	if (!node)
	{
		return (NULL);
	}
	if ((!str))
	{
		free(node);
		return (NULL);
	}

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	if (!(*head))
		*head = node;
	else
	{
		end = *head;
		while (end->next)
		{
			end = end->next;
		}
		end->next = node;
	}

	return (*head);
}

