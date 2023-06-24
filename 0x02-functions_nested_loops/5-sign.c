#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: character to be checked
 *
 * Return: 1 if +, 0 if zero, and -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+%d\n", n);
		return (1);
	}
	else if (n == 0)
	{
		printf("0\n");
		return (0);
	}
	else
		printf("-%d\n", -n);
	return (-1);
}
