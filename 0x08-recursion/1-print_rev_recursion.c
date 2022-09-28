#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: is the string to be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s--;

	_print_rev_recursion(s);


}

