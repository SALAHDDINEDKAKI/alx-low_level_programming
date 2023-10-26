#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number to retrieve the bit from
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at the specified index, or -1 if index is
 * out of range
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}
