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

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
        {
                if (letter == 'Q' || letter == 'E')
                {
                        continue;
                }
                putchar(letter);
        }

	putchar('\n');

	return (0);
}
