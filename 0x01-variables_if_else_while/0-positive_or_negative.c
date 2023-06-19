#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point of the program
 * print value of a status:zero, positive, or negative
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d", n);
	if (n > 0)
		printf(" is positive\n");
	else if (n == 0)
	{
		printf(" is zero\n");
	} else
	{
		printf(" is negative\n");
	}
	return (0);
}

