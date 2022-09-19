#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen - this pronts the length of a string
 * @s: is the argument
 * Return: zero if success
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}


