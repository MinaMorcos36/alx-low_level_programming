#include "main.h"

/**
 * Description: reverse_array - reverses array of integers
 * @a: array
 * @n: no of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
