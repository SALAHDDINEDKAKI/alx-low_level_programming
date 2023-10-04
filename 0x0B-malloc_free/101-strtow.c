#include "main.h"
#include <stdlib.h>

/**
  * count_words - counts words
  * @str: string pointer
  * Return: nothing
  */
int count_words(char *str);

/**
  * is_space  - if it is space
  * @c: character
  * Return: nothing
  */
int is_space(char c);

/**
  * **strtow -  splits a string into zords.
  * @str: a pointer to a string
  * Return: NULL if str == NULL or str == ""
  */

char **strtow(char *str)
{
	int num_words, j;
	int i, word_start, word_length, in_word, word_index;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);
	if (num_words == 0)
	{
		return (NULL);
	}

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	i = 0;
	word_start = 0;
	word_length = 0;
	in_word = 0;
	word_index = 0;

	while (str[i] != '\0')
	{
		if (!is_space(str[i]))
