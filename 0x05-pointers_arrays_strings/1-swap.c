#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: input paramiter 1
 * @b: input paramiter 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
