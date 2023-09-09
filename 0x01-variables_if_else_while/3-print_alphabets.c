#include <stdio.h>

/**
 * main - English alphabets are in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 53; i++)
	{
			putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}
