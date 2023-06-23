#include "main.h"

/**
 * more_numbers - print numbers from 0 t0 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j <= 9)
			{
				_putchar(j + '0');
			}
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
		}
		_putchar('\n');
		}
	}
}
