#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: is an argument
 * @src: is an argument
 * @n: is an argument
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a])
	{
		a++;
	}
	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a + n + 1] = '\0';
	return (dest);
}


