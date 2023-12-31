#include "main.h"

/**
  * _strcmp - compares two strings.
  * @s2: second string
  * @s1: firssst string
  * Return: Always 0 (success)
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
