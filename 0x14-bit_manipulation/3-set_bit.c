#include "main.h"
#include <stdio.h>

/**
 * set_bit - Sets the value of a bit at a specified index to 1.
 * @n: A pointer to the number containing the bit.
 * @index: The index of the bit to set (indices start at 0).
 *
 * Return: If an error occurs or the index is out of range - return -1.
 *         Otherwise - return 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
