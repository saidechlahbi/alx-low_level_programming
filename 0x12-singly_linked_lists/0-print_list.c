#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to struct
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int countt = 0;
	const list_t *node = NULL;

	if (!h)
	{
		return (0);
	}
	node = h;

	while (node != 0)
	{
		if (!node->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", node->len, node->str);
		}
		node = node->next;
		countt++;
	}
	return (countt);
}

