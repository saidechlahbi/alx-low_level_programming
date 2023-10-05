#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated.
 * @s2: The string to be concatenated to @s1.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	int m = 0;
	int n = 0;
	int k;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[m] != '\0')
		m++;

	while (s2[n] != '\0')
		n++;

	s3 = (char *)malloc(1 + (sizeof(char) * (m + n)));

	if (s3 == NULL)
		return (NULL);

	for (k = 0; k < m; k++)
	{
		s3[k] = s1[k];
	}

	for (k = m; k < (m + n); k++)
	{
		s3[k] = *s2;
		s2++;
	}

	return (s3);
}
