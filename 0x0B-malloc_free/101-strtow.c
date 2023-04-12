#include "main.h"

/**
 * word_len - locates the index marking within a strig
 * @tim: the string to be searched
 * Return: the neccessary output
 */

int word_len(char *tim)
{
	int index_t = 0, len_t = 0;

	while (*(tim + index_t)&&*(tim + index_t) != ' ')
	{
		len_t++;
		index_t++;
	}

	return (len_t);
}
/**
 * count_words - counts the number of the words to be index
 * @tim: the first function parameter to be index
 *
 * Return: the necessary output
 */

int count_words(char *tim)
{
	int index_t = 0, words = 0, len_t = 0;

	for (index_t = 0; *(tim + index_t); index_t++)
		len_t++;

	for (index_t = 0; index_t < len_t; index_t++)
	{
		if (*(tim + index_t) != ' ')
		{
			words++;
			index_t += word_len(tim + index_t);
		}
	}

	return (words);
}

/**
 * strtow - function that splits a string into words
 *
 * @tim: first function parameter
 * Return:the neccessy output
 */

char **strtow(char *tim)
{
	char **string;
	int index_t = 0, words, w, letters, l;

	if (tim == NULL || tim[0] == '\0')
		return (NULL);

	words = count_words(tim);
	if (words == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (words + 1));
	if (string == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (tim[index_t] == ' ')
			index_t++;

		letters = word_len(tim + index_t);

		string[w] =  malloc(sizeof(char) * (letters + 1));

		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);
			free(string);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			string[w][l] = tim[index_t++];

		string[w][l] = '\0';
	}
	string[w] = NULL;

	return (string);
}
