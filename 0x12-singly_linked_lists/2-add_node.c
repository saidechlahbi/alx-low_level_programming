#include "lists.h"
/**
 * add_node - Add a new node to the beginning of a list_t list.
 * @head: Pointer to the list
 * @str: Pointer to a string
 * Return: The updated number of nodes in the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;


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
	node->next = *head;
	*head = node;
	return (node);
}

