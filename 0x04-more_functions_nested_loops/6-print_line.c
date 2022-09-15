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
	i = 0;

	while (i < n)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar(c);
		i++;
	}
	_putchar('\n');
	return (0);
}
