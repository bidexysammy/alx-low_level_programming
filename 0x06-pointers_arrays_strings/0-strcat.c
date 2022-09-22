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
	int i, j;

	for (i = 0; dest[i]; i++)
	{
		;
	}
	for (j = 0; src[j]; j++)
	{

		dest[i] = src[j];

	}
	dest[i] = '\0';
	return (dest);

}

