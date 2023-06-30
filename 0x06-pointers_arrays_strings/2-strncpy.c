#include "main.h"

/**
  * _strncpy - copy string to another
  * @dest: parameter 1
  * @src: parameter 2
  * @n: limit
  *
  * Return: copied valued
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}

	while (i < n && sr[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[a] = '\0';
		i++;
	}

	return (dest);
}
