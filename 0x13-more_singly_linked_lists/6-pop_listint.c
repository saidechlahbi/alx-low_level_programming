#include "lists.h"
/**
 * pop_listint - unction that deletes the head node of a
 * listint_t linked list.
 * @head: pointer to struct.
 * Return: the head node’s data (n).
*/
int pop_listint(listint_t **head)
{
	listint_t *t;
	int num;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (num);
}
