#include <stdio.h>

/**
 * swap_int - Swaps the values of two integerss
 * @a: the first integer to swap
 * @b: the second integer to swap
 * Return: blank (nothing)
 */

void swap_int(int *a, int *b)
/* function that swaps the values of two integers*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
