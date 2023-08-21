#include "main.h"

/**
 * Description: swap_int - swaps two numbers a and b
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
