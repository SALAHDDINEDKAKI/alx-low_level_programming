#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checkes if n is greater than 5,
 * equal to 0 and less than 6 and not 0.
 *
 * Return: always 0 (success)
 */
int main(void)
{
		int n;
		int last_digit;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		last_digit = n % 10;
		if (last_digit >5)
		{
			printf("Last digit of %d and is greater than 5\n", n, last_digit);
		}
		else if (last_digit == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last_digit);
		}
		else if (last_digit < 6 && last_digit != 0)
		{
			printf("Last digit of %d and si less than 6 and not 0\n", n, last_digit);
		}
		return (0);
}	
