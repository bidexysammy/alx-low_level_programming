#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase times ten
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c;
	int a;

	for (a = 1; a <= 10; a++)
	{
		_putchar(a);
	}
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
}

