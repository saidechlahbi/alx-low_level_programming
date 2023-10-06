#include "main.h"
/**
 * _strlen - function that calculate the lenght of str.
 * @s: pointer to the str.
 *
 * Return: returns the lenght of str.
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

