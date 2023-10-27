#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 * Return: the number of nodes.
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int l = 0;
	int i = 0;
	unsigned int n = 0;

	if (!b)
		return (0);
	while (b[l] != '\0')
		l++;
	while (i < l)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		if (b[i] == '1')
			n += (1 << (l - 1 - i));
		i++;
	}
	return (n);
}
