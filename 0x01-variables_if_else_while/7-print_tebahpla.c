#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is always present
 *
 * Description: the main is where compiling begins
 * Return: zero if success
 */
int main(void)
{
	int c;

	for (c = 'z'; c <= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
