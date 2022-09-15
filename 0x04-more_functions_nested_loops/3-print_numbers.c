#include "main.h"
/**
 * print_numbers - prints 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int c;

	if (c >= 0 && c <= 9)
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}

