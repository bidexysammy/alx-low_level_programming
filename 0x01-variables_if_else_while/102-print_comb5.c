#include <stdio.h>
#include <stdlib.h>
/**
 * main - this must occur in every program
 *
 * Description: the main function is where compilation begins
 * Return: zero if success
 */
int main(void)
{
	int c, i;

	for (c = 0; c < 100; c++)
	{
		for (i = 0; i < 100; i++)
		{
			if (c < i)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				if (c != 98 || i != 99)
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
