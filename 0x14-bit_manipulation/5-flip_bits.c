#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from on number to another.
 * @n: Number
 * @m: Number 2
 * Return: 1 if it worked, or -1 if an error occurred
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int XOR = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		if ((XOR >> i) & 1)
			count++;
	}
	return (count);
}

