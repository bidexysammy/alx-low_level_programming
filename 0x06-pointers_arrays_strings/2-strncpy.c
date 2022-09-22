#include "main.h"
/**
 * _strncpy - copies two string
 * @dest: is an argument
 * @src: is an argument
 * @n: is an argument
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


