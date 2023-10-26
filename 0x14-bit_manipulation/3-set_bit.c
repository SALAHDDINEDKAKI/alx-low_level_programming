#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: a pointer to the number whose bit is to be set
 * @index: the index of the bit to be set
 *
 * Return: 1 if successful, or -1 if index is out of range
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
