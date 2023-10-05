#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_len - function that return lenght of string.
 *
 * @str: param.
 * Return: Always number when Done.
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - function that get word count from string.
 *
 * @str: param.
 * Return:Always number when Done.
 */

int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - function that split string to words
 * @str: param
 * Return: pointer to pointer
 */

char **strtow(char *str)
{
	char **string;
	int index = 0, word, w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word = count_words(str);
	if (word == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (word + 1));
	if (string == NULL)
		return (NULL);

	for (w = 0; w < word; w++)
	{
		while (str[index] == ' ')
			index++;

		letter = word_len(str + index);

		string[w] = malloc(sizeof(char) * (letter + 1));

		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);

			free(string);
			return (NULL);
		}

		for (l = 0; l < letter; l++)
			string[w][l] = str[index++];

		string[w][l] = '\0';
	}
	string[w] = NULL;

	return (string);
}

