#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @a: is the argument
 * Return: zero if success
 */
int print_last_digit(int a)
{
	int c;

	c = a % 10;
	if (c < 0)
	{
		c = c * -1;
	}
	_putchar(c + '0');
	return (c);
}



