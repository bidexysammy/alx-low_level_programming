#include <stdlib.h>
#include <stdio.h>
/**
 * main - this must be present in every program
 *
 * Description: the main function is where compiling begins
 * Return: zero if success
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
