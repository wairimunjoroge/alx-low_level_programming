#include "main.h"

/**
 * _strchr - Locates the first occurrence of the character c
 * @s: Pointer to the string to be searched
 * @c: The character to be located
 *
 * Return: Pointer on success, NULL on fail
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
