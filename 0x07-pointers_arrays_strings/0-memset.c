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


	for (; s[m]; s++)
	{
		while (n <= m)
		{
			s[m] = b;

			n++;
		}
	}


	return (s);
}




