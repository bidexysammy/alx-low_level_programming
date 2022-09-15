#include "main.h"
/**
 * print_line - prints line
 * @n: is the argument
 * Return: zero
 */
void print_line(int n)
{
	int c;
	int i;


	c = 95;
	i = 1;

	while (i < n)
	{
		_putchar(c);
		i++;
		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
