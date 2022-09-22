#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: is the first argument
 * @src: is the second argument
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	char *ptr;

	dest = "Jesus";
	src = "Christ!";
	for (i = 0; dest[i]; i++)
	{
		while (dest[i] != '\0')
		{
			ptr = dest;
		}
	}
	for (i = 0; src[i]; i++)
	{
		while (src[i] != '\0')
		{
			ptr = src;
		}

	}
	ptr = '\0';
	_putchar(10);
	return (ptr);
}

