#include "function_pointers.h"
/**
 * int_index - function that searches for an integer in an array of integers.
 * @array: Array of integers.
 * @size: Size of the array.
 *
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: Response.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}

