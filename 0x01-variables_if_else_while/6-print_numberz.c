#include <stdio.h>

/**
 * main - Entry point
 *
 * return: 0 on success
 */
int main(void)
{
	int integer;

	for (integer = 0; integer <= 9; integer++)
		putchar('0' + integer);
	putchar('\n');
	return (0);
}
