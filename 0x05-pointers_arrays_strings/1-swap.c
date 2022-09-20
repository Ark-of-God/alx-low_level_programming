#include "main.h"
/**
 * swap_int - swaps two integers' values
 * @a: first integer
 * @b: second integer
 * Return: returns nothing
 */

void swap_int(int *a, Int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
