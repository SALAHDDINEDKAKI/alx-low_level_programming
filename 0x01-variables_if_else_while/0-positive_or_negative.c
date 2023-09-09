#include <stdlib.h>
#include <time.h>
/**
 *
 * main - check if n is a zero, postitive or negative
 *
 * Return: always 0 (succ)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
		printf("%d is positive\n", n);
	}
	else if (n == 0) {
		printf("%d is zero\n", n);
	}
	else (n < 0) {
		printf("%d is negative\n", n);
	}
	return (0);
}
