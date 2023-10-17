#include "main.h"
/**
 * swap_int - swaps one integer for another
 * @a: integer to be swapped
 * @b: integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	n = *a;
	*a = *b;
	*b = n;
}
