#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array, using malloc
 * @nmemb: The number of elements
 * @size: The byte size of each array element
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *b;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	b = m;

	for (index = 0; index < (size * nmemb); index++)
		b[index] = '\0';

	return (m);
}
