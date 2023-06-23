#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 14; i++)
	{
		for (j = 1; j <= 14; j++)
		{
			if (j < 10)
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
