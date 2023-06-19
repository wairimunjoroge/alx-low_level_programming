#include <stdio.h>

/**
 * main - Entry point
 *
 * return: 0 on success
 */
int main(void)
{
	char integer;

	for (integer = '0'; integer <= '9'; integer++)
		putchar(integer);
	putchar('\n');
	return (0);
}
