#include <stdio.h>

/**
 * main - English alphabets are in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}
