#include "lists.h"

/**
 * insert_nodeint_at_index - this function that Inserts a new node to
 *                     a listint_t list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices starting from 0.
 * @n: The integer for the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *node_index = *head;
	listint_t *new_node, *node_after;

	if (head == NULL || *head == NULL)
		return (NULL);

	for (node = 0; node_index != NULL; node++)
		node_index = node_index->next;

	if (idx > (node + 1))
		return (NULL);

	node_index = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		node_after = *head;
		for (node = 0; node < (idx - 1); node++)
			node_index = node_index->next;
		for (node = 0; node < idx; node++)
			node_after = node_after->next;
		node_index->next = new_node;
		new_node->next = node_after;
		return (new_node);
	}
}
