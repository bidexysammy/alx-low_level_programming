#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character
 * @s: is ann argument
 * @c: is an arguemnt
 *Return: pointer to the character
 */
char *_strchr(char *s, char c)
{
	int b;

	int a = 0;

	while (s[a])
	{
		a++;
	}


	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}

	}
	return ('\0');
}




