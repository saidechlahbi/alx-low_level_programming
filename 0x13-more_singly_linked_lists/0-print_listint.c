#include "lists.h"
#include  <stdio.h>
/**
 * print_listint :a function that prints all the elements of a list of type int_t.
 *
 * @h:a pointer of the head of the list_t.
 *
 * return: return the number of all the nodes.
 *
 */
size_t print_listint(const listint_t *h);
{
 const listint_t *node;
 size_t episode =0;
 node = h;
 while(node != NULL)
 {
  printf("%d\n",node->n);
  node = node->next;
  episode ++;
 }
 return(episode)	
}
