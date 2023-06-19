#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter; 

	for (letter = 'a'; letter != 'e'; letter != 'q'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
			
