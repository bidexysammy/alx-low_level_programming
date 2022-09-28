#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion -  prints power
 * @x: is the first integer
 * @y: is the second integer
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
