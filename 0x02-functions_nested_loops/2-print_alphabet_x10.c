#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase times ten
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c;
	int a;

	a = 1;

	while (a <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		a++;
	}
	_putchar('\n');
}

