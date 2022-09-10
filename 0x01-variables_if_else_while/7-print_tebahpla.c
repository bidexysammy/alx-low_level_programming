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
	int C;

	for (C = 'z'; C >= 'a'; C--)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
