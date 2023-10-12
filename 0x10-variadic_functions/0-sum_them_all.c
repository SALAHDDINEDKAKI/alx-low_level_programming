#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums up a variable number of integers.
 * @n: The number of integers to be summed.
 * @...: The variable arguments (integers) to be summed.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, num;
	va_list args;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
