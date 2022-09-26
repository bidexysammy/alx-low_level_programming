#include "main.h"
#include <stdio.h>

/**
 * _memset - fils memory with a constant byte
 * @s: is an argument
 * @b: is an argument
 * @n: is an argument
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;


	for (m = 0; m < n; m++)
	{
		s[m] = b;

	
	}


	return (s);
}




