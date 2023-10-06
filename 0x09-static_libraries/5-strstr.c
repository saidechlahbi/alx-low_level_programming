#include "main.h"
/**
*_strstr - function finds the first occurrence
* of the substring needle in the string haystack
*
* The terminating null bytes (\0) are not compare.
*
*@haystack: str where the search is made
*@needle: str that occurence is searched in haystack
*Return:Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}

