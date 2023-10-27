#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n;
	char *adrss;

	n = 2;
	adrss = (char *)&n;
	if (*adrss)
		return (1);
	return (0);
}

