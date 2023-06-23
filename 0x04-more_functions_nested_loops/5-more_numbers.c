#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	int i = 1, j;

	for (i = 1; j <= 10; i++)
	{
		j = 1;

		for (j = 1; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
		}
		_putchar('\n' + '0');
		}
	}
}
