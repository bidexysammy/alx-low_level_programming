#include <stdio.h>
#include "main.h"

/**
 * factorial - gives the factorial
 * @n: is the integer
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));

}

