
#include "main.h"
/**
 * _strcmp - compare string values.
 * @s1: input value.
 * @s2: input value.
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int r;

	r = 0;
	while (s1[r] != '\0' && s2[r] != '\0')
	{
		if (s1[r] != s2[r])
		{
			return (s1[r] - s2[r]);
		}
	r++;
	}
	return (0);
}

