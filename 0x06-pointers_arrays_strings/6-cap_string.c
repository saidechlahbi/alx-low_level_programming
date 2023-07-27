#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @c:str
* Return: dtring
*/
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i - 1] == ' ' ||
					c[i - 1] == '	' ||
					c[i - 1] == '\n' ||
					c[i - 1] == ',' ||
					c[i - 1] == ';' ||
					c[i - 1] == '.' ||
					c[i - 1] == '!' ||
					c[i - 1] == '?' ||
					c[i - 1] == '"' ||
					c[i - 1] == '(' ||
					c[i - 1] == ')' ||
					c[i - 1] == '{' ||
					i == 0 ||
					c[i - 1] == '}') &&
				(c[i] >= 'a' && c[i] <= 'z'))
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}

