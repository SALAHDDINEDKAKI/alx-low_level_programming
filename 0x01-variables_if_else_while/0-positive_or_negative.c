#include <stdlib.h>
#include <time.h>
/**
 *
 * main - generate random numbers to detect -ve or +ve
 *
 * Return: equal (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("%d is positive", n);
	}
	else if (n == 0) {
		printf("%d is zero");
	}
	else (n < 0) {
		printf("%d is positive");
	}
	return (0);
}
