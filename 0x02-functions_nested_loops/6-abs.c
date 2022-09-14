#include "main.h"
/**
 * _abs - compute the absolute value
 * @a: is the argument
 * Return: zero if success
 */
int _abs(int a)
{
	if (a < 0)
	{
		int abs_val;

		abs_val = a * -1;
		return (abs_val);
	}
	return (a);
}
