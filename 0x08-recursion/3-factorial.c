#include "main.h"

/**
 * factorial - returns factorial os a number
 * @n: the number
 *
 * Retrun:  -1 on error or factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
