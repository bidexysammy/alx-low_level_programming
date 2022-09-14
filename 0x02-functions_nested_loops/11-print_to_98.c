#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers
 * @a: is the argument
 * Return: zero if success
 */
void print_to_98(int a)
{
	if (a <= 98)
	{
		for (; a <= 98; a++)
		{
			if (a == 98)
			{
				printf("%d", a);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", a);
			}
		}
	}
}


