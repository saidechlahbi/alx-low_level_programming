#include "lists.h"

/**
 * find_listint_loop -funct finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the Address of the Node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *I, *T;

	if (head == NULL || head->next == NULL)
		return (NULL);

	I = head->next;
	T = (head->next)->next;

	while (T)
	{
		if (I == T)
		{
			I = head;

			while (I != T)
			{
				I = I->next;
				T = T->next;
			}

			return (I);
		}

		I = I->next;
		T = (T->next)->next;
	}

	return (NULL);
}
