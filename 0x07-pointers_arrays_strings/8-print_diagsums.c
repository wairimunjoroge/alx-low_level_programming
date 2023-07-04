#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum
 * @a: Pointer to the matrix of integers
 * @size: Size of the matrix (number of rows or columns)
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;  /* Sum of main diagonal */
	int sum2 = 0;  /* Sum of secondary diagonal */

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				/* Accessing element on the main diagonal */
				sum1 += *(a + (i * size) + j);
			if (i + j == size - 1)
				/* Accessing element on the secondary diagonal */
				sum2 += *(a + (i * size) + j);
		}
	}

	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
