#include "main.h"
#include <stdio.h>
/**
 * flip_bits - Counts the number of bits that need to be
 *             flipped to change one number into another.
 * @n: The initial number.
 * @m: The target number to flip n into.
 *
 * Return: The count of bits that need to be flipped to go from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xxory = n ^ m, biit = 0;

	while (xxory > 0)
	{
		biit += (xxory & 1);
		xxory >>= 1;
	}

	return (biit);
}
