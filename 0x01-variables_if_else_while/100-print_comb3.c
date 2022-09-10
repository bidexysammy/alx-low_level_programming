#include <stdio.h>
#include <stdlib.h>
/**
 * main - this occurs in every program
 *
 * Description: the main funxction is where compiling bgins
 * Return: zero if success
 */
int main(void)
{
	int c, i;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (c < i)
			{
				putchar(c + '0');
				putchar(i + '0');
				if (c <= 7 && i <= 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
