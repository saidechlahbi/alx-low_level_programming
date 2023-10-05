#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars.
 * and initializes it with a specific char.
 *
 * @size: size input.
 * @c: input char
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		arr[m] = c;

	return (arr);
}
