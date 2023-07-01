#include "main.h"

/**
  * string_toupper - does the conversion from lowercases to upper
  * @p: parameter 1
  *
  * Return: converted string
  */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}

		i++;
	}

	return (p);
}
