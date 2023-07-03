#include "main.h"

/**
 * *_memcpy - copies the bytes from memory area src to memory area dest
 * @src: pointer to the source memory area
 * @dest: pointer to the destination memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src [i];
	}
	return (dest);
}
