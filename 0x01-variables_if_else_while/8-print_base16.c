#include <stdio.h>
#include <stdlib.h>
/**
 * main - this occurs in every program
 *
 * Description: the main function is where compiling begins
 * Return: zero if success
 */
int main(void)
{
	int c;
	int M;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	for (M = 'a'; M <= 'f'; M++)
	{
		putchar(M);
	}
	putchar('\n');
	return (0);
}
