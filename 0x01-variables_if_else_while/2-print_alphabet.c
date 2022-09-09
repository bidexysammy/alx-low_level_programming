#include <stdlib.h>
#include <stdio.h>
/**
 * main - main must be present in every program
 *
 * Description: the main function is where compiling begins
 * Return: zero if success
 */
int main(void)
{
	int C;

	for (C = 'a'; C <= 'z'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
