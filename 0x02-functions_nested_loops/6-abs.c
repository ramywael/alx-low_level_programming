#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the integer to compute the absolute value of
 *
 * Return: the absolute value of c
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else if (c == 0)
	{
		_putchar(c + '0');
		return (0);
	}
	else
	{
		return (c);
	}
}
