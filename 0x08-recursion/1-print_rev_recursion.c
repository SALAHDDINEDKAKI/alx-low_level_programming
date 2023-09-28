#include "main.h"

/** 
  * _print_rev_recursion - prints strings in reverse form.
  * @s: a pointer to an array string
  * Return: Always 0 (success)
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
