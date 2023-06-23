#include "main.h"

/**
 * more_numbers - prints more numbers on new lines
 */
void more_numbers(void)
{
	int rows = 0;

	while (rows < 10)
	{
		int i = 0;

		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
			i++;
		}
		_putchar('\n');
		rows++;
	}
}
