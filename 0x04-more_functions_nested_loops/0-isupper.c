#include "main.h"

/**
 * _isupper - checks for uppercase
 *
 * @c: parameter to be checked
 * Return: return 1 if c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
