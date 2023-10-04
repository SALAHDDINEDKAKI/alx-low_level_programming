#include <stdlib.h>
#include "main.h"

/**
  * _strcat - concatenates
  * @src: sources
  * @dest: destination
  * Return: nothing
  */
char *_strcat(char *dest, char *src);

/**
  * _strlen - string
  * @str: a pointer to a string
  * Return: nothing
  */
int _strlen(char *str);

/**
  * argstostr - concatenates all the arguments of your program.
  * @av: argument vector
  * @ac: argument count
  * Return: a pointer to a New string, or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0;
	int i, j;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += _strlen(av[i]);

	concatenated = malloc(sizeof(char) * (total_length + ac + 1));
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[index] = av[i][j];
			index++;
		}
		concatenated[index] = '\n';
		index++;
	}
	concatenated[index] = '\0';
	return (concatenated);
}
