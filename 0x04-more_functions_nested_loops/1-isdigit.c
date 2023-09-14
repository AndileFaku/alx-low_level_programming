#include "main.h"

/**
 * _isdigit - Check for a digit
 * @k: variable  to be checked
 * Return: 1 if variable is a digit and 0 if otherwise
 */

int _isdigit(int k)
{
	if (k >= 48 && k <= 57)
	{
		return (1);
	}
	return (0);
}
