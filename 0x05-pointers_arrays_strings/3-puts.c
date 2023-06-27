#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * _puts - prints a string
 *@str: the string to be printed
 * Return: a string
 */
void _puts(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		write (1, ptr,1);
		ptr++;
	}
	write(1, "\n", 1);
}
