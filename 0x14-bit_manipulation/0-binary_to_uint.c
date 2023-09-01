#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented
 *                        as a string to an unsigned int.
 * @b: A pointer to a string containing only'0' and '1' characters.
 *
 * Return: If b is NULL or contains characters other than '0' or '1', return 0.
 *         Otherwise, return the converted unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, mul = 1;
	int said;

	if (b == '\0')
		return (0);

	for (said = 0; b[said];)
		said++;

	for (said -= 1; said >= 0; said--)
	{
		if (b[said] != '0' && b[said] != '1')
			return (0);

		number += (b[said] - '0') * mul;
		mul *= 2;
	}

	return (number);
}
