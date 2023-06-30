#include "main.h"

/**
  * _strncat - Concats two strings utilizing n
  * @dest: parameter 1
  * @src: parameter 2
  * @n: stop concatenatin
  *
  * Return: Pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i + n + 1] = '\0';

	return (dest);
}
