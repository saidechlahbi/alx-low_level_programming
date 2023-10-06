#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: destination
 * @src: source
 * @n: num of chars
 * Return: return destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int r;

	r = 0;
	while (r < n && src[j] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}

	return (dest);
}

