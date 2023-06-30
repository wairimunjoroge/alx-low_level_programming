#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: parameter 1
  * @s2: parameter 2
  *
  * Return: int 0 or 1
  */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, a = 0;
	int chk;

	while (s1[x])
	{
		x++;
	}

	while (s2[y])
	{
		y++;
	}

	if (x <= y)
	{
		chk = x;
	}
	else
	{
		chk = y;
	}

	while (z <= chk)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			a = s1[z] - s2[z];
			break;
		}

		z++;
	}

	return (a);
}
