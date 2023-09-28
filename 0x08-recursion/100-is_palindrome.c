#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		len++;
		len += _strlen(s + l);
	}

	return (l);
}

/**
 * check_for_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @l: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_for_palindrome(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);

	if (s[i] == s[l - i - 1])
		return (check_for_palindrome(s, l, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = _strlen(s);

	if (!(*s))
		return (1);

	return (check_for_palindrome(s, l, i));
}

