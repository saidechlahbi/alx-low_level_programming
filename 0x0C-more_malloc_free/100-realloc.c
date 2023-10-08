#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previsouly allocated by malloc.
 * @old_size: size of the allocated memory for ptr.
 * @new_size: new size of the new memory block.
 *
 * Return: pointer to the newly allocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (index = 0; index < old_size && index < new_size; index++)
			*((char *)p + index) = *((char *)ptr + index);
		free(ptr);
	}
	return (p);
}

