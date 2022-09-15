#include "main.h"
/**
 * more_numbers - prints more numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int a;
	int c;

	a = 1;
	while (a <= 10)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c + '0');

		}
		_putchar('\n');
		_putchar(a + '0');
		a++;
	}
}
