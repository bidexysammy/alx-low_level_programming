#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes
 * @dest: is an argument
 * @src: is an argument
 * @n: is an argument
 * Return:pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;
	unsigned int i;

	for (m = 0; m < n; m++)
	{
		dest[i] = src[m];
	}
	return (dest);
}
