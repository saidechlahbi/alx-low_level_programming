#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to a string consisting of '0' and '1' characters.
 *
 * Return: The converted unsigned int.
 * If there are non-'0'/'1' characters in the string or b is NULL, return 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int m = 0;
	unsigned int n = 0;

	if (!b)
		return (0);
	while (b[len] != '\0')
		len++;
	while (m < len)
	{
		if (!(b[m] == '0' || b[m] == '1'))
			return (0);
		if (b[m] == '1')
			n += (1 << (len - 1 - m));
		m++;
	}
	return (n);
}
