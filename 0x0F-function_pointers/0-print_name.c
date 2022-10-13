#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: is the name to be printed
 * @f: is the function that calls
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;


	while (name[i] != '\0')
	{
		_putchar(name[i]);
		name[i]++;
	}
}
