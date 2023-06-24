#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char *message = "_putchar\n";

	int i = 0;

	while (message[i] != '\0')
	{
		_putchar(message[i]);
		i++;
	}
	return (0);
}
