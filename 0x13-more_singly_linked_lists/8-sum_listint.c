#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to struct.
 * Return: the sum of all the data.
*/
int sum_listint(listint_t *head)
{
	int summ = 0;

	while (head)
	{
		summ = summ + head->n;
		head = head->next;
	}
	return (summ);
}
