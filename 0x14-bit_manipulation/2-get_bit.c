#include "main.h"
#include <stdio.h>

/**
 * get_bit - Retrieves the value of a bit at a specified index.
 * @n: The number containing the bit.
 * @index: The index of the bit to retrieve (indices start at 0).
 *
 * Return: If an error occurs or the index is out of range - return -1.
 *         Otherwise - return the value of the bit at the specified index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
