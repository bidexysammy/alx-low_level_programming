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


	n = 0;
	while (n < m)
	{
		for (; s[m]; s++)
		{
			s[n] = b;
			s[m] = s[n];
		}
		n++;
	}
	return (s);
}




