#include <stdio.h>

/**
 * main - English alphabets are in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[26] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (letter[i] == 'q' || letter[i] == 'e')
		{
			continue;
		}
		else
		{
			putchar(letter[i]);
		}
	}
	putchar('\n');
	return (0);
}
