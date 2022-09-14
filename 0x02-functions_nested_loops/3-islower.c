#include "main.h"
/**
 * _islower - checks for lowercase
 *@c:int c is the argument
 * Return: one if lower and zero if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}


