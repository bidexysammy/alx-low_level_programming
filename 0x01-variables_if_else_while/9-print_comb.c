#include <stdio.h>
#include <stdlib.h>
/**
 * main - this occurs in every program
 *
 * Description: the function main is where the compilation begins
 * Return: zero if success
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
		if (c <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
