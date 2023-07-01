#include "main.h"

/**
  * cap_string - make all Capital
  * @s: parameter
  *
  * Return: converted string
  */
char *cap_string(char *s)
{
	int x = 0, y;
	int z = 13;
	char chr[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[x])
	{
		y = 0;

		while (y < z)
		{
			if ((x == 0 || s[x - 1] == chr[y]) && (s[x] >= 97 && s[x] <= 122))
				s[x] -= 32;

		       y++;
		}

		x++;
	}

	return (s);
}
