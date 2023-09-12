#include <stdio.h>
/**
 * main - Entry point 
 * Return: 0 (success)
 */

int main(void)
{
	int x;

	x = 0;
	while
		(x < 10)
		{
			putchar(x + '0');
			x++;
			if (x <= 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
