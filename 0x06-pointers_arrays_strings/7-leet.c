#include "main.h"

/**
  * leet - Encoder
  * @s: parameter
  *
  * Return: encoded string
  */
char *leet(char *s)
{
	int x = 0, y = 0, z = 5;
	char chr1[5] = {'A', 'E', 'O', 'T', 'L'};
	char chr2[5] = {'4', '3', '0', '7', '1'};

	while (s[x])
	{
		y = 0;

		while (y < z)
		{
			if (s[x] == chr1[y] || s[x] - 32 == chr1[y])
			{
				s[x] = chr2[y];
			}

			y++;
		}

		x++;
	}

	return (s);
}
