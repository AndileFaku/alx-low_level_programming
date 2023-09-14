#include "main.h"

/**
 * _isupper - Check if the alphabet is uppercase
 * @k: Number to be checked
 * Return: 1 for uppercase alphabet or 0 for any else
 */

int _isupper(int k)
{
	if (k >= 65 && k <= 90)
	{
		return (1);
	}
	return (0);
}
