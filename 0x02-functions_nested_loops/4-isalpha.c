#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 on success and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		return (1);
	}
	else
	{
		return (0);
	}
}
