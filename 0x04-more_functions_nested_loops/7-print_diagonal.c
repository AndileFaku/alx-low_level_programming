#include "main.h"

/**
 * print_diagonal - Draws a diagonal line according to parameter
 * @k: The number of times to print a diagonal line
 * Return: empty
 */

void print_diagonal(int k)
{
	int a, b;

	if (k <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < k; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
