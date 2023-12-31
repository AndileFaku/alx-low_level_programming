#include <stdio.h>

/**
 * main - Displays the sum of all multiples of 3 or 5 up to 1024
 * Return: 0 (success)
 */

int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
