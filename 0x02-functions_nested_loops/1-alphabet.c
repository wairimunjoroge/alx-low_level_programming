#include "main.h"

/**
 * main - entry point 
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
