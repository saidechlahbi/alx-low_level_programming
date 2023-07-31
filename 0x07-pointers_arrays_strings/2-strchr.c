#include "main.h"
#include <stddef.h>
/**
*_strchr - find a char in a string
*@s: string
*@c: char we are searching for
*Return: Returns the str when c found
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

