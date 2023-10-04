#include "main.h"
#include <stdlib.h>

/**
  * *create_array -  creates an array of chars,
  * and initializes it with a specific char.
  * @c: the char value used fooor initialization.
  * @size: the size of the array to be created
  * Return: NULL if size = 0 otherwise a pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = c;
	return (array);
}
