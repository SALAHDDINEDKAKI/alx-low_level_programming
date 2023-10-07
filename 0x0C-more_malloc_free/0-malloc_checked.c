#include "main.h"
#include <stdlib.h>

/**
  * *malloc_checked - alllocates memory using malloc.
  * @b: integer
  * Return: a pointer to the alllocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
