#include "main.h"

/**
 * _strpbrk - Locates the first occurrence of  any of the bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the bytes to match
 *
 * Return: data from found accepted
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
