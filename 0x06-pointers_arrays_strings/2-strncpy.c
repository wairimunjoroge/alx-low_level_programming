#include "main.h"

/**
  * _strncpy - copies one string to another
  * @dest: 1st parameter
  * @src: 2nd parameter
  * @n: limit
  *
  * Return: copied valued
  */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[y])
	{
		y++;
	}

	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
