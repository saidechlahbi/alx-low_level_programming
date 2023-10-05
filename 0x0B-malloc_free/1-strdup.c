#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - this function that Returns a pointer
 *           to a newly-allocated space in memory.
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL.
 *            Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int m = 0;
	int n = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[m] != '\0')
		m++;

	p = (char *)malloc((m * (sizeof(char)) + 1));

	if (p == NULL)
		return (NULL);
	for (n = 0; n < m; n++)
	{
		p[n] = str[n];
	}

	return (p);
}
