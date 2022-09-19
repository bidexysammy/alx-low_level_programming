#include "main.h"
/**
 * _strcpy - copies string
 * @dest: is the first argument
 * @src: is the second argument
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);

}
