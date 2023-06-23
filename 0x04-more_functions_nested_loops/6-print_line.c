#include "main.h"

/**
 * print_line - draws a line of given length
 * @n: parameter
 *
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
