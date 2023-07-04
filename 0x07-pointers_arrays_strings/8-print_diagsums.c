#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum
 * @a: Pointer to the matrix of integers
 * @size: Size of the matrix (number of rows or columns)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;  /* Sum of main diagonal */
	int sum2 = 0;  /* Sum of secondary diagonal */

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
