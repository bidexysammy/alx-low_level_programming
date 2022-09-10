#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is always present
 *
 * Description: the main is where ccompiling begins
 * Return: zero if success
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
