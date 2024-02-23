#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();

	printf("Last digit of %d is ", n);

	if (n < 0)
		n *= -1; /* Make n positive if it's negative */

	n %= 10; /* Extract the last digit */

	printf("%d ", n);

	if (n > 5)
		printf("and is greater than 5\n");
	else if (n == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
