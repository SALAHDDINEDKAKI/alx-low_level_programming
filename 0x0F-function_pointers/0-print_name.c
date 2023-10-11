#include <stdio.h>
#include "function_pointers.h"

/**
 * print - prints a name
 * @name: name to print
 */
void print(char *name)
{
	printf("Name: %s\n", name);
}

/**
 * print_name - prints a name by calling ppprinting function passed as parameter
 * @name: name to print
 * @f: function to call to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
