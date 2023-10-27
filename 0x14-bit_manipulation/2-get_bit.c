#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number
 * @index: The index of the bit you want to get (starting from 0)
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	return ((n >> index) & 1);
}

