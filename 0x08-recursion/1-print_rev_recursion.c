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

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	s[i]--;

	_print_rev_recursion(s);


}

