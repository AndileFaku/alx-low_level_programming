#include "main.h"
#include <unistd.h>

/**
 * print_numbers - Prints the numbers from 0 up to 9
 * Return: The numbers from 0 up to 9
 */

void print_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
	{
	_putchar(k + '0');
	}
	_putchar('\n');
}
