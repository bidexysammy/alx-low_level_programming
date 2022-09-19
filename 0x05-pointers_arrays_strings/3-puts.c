#include "main.h"
/**
 * _puts - prints stings to the stdout
 * @str: is the argument
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{

		_putchar(*str);
	}
	_putchar('\n');
}
