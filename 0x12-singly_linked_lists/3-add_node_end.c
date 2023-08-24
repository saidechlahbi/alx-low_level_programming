#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node with a string to the end of a linked list.
 * @head: Pointer to the head of the linked list.
 * @str: String to be stored in the new node.
 * Return: Address of the new node, or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last_node;
    size_t len = strlen(str);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = len;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        last_node = *head;
        while (last_node->next != NULL)
            last_node = last_node->next;
        last_node->next = new_node;
    }

    return (new_node);
}
