#include "main.h"

/**
 * factorial - returns factorial os a number
 * @n: the number
 *
 * Retrun: factorial of the number or -1 on fail
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
