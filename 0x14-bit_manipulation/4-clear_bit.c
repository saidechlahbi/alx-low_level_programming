#include "main.h"

/**
 * clear_bit - Clears (sets to 0) the bit at the given index.
 * @n: The number
 * @index: The index of the bit you want to clear (starting from 0)
 * Return: 1 if successful, or -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
