#include <stdio.h>
/**
 * main - Entry point for program printing hexadecimals
 * Return: 0 (success)
 */

int main(void)
{
	int x;

	char c;

	x = 0;
	c = 'a';
	while
		(x < 10) {
			putchar(x + '0');
			x++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
