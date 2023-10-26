#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 *
 * Return: the converted number, or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == 0)
		return (0);

	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			result = (result << 1);
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
