#include "main.h"

/**
 * reverse_array - function that reserse content of array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		b[index] = tmp;
	}
}
