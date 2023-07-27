#include "main.h"
/**
* _strcmp - compare 2 str
* @s1: first str
* @s2: sec str
* Return: 0 if ==, r if not
*/
int _strcmp(char *s1, char *s2)
{
	int r, c1, c2, i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	c1 = (int) s1[i];
	c2 = (int) s2[i];
	r = c1 - c2;
	return (r);
}

