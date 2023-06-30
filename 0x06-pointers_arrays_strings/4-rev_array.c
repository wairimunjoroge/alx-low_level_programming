#include "main.h"

/**
  * reverse_array - reverses an array
  * @a: array
  * @n: limit
  *
  */
void reverse_array(int *a, int n)
{
	int *v, w, x, y;

	v = a;

	for (w = 1; w < n; w++)
	{
		v++;
	}

	for (y = 0; y < w / 2; y++)
	{
		x = a[y];
		a[y] = *v;
		*v = x;
		v--;
	}
}
