#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers separated by a specified separator.
 * @separator: The string to be printed between numbers (or NULL if none).
 * @n: The number of integers to be printed.
 * @...: The variable arguments (integers) to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
