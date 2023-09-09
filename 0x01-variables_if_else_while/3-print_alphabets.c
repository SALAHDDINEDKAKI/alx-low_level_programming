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
		if (letter[i] == 'q' || letter[i] == 'e')
		{
			continue;
		}
		else if (letter[i] == 'Q' || letter[i] == 'E')
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
