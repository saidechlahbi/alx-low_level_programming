#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit at a specified index to 0.
 * @n: A pointer to the number containing the bit.
 * @index: The index of the bit to clear (indices start at 0).
 *
 * Return: If an error occurs or the index is out of range - return -1.
 *         Otherwise - return 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}