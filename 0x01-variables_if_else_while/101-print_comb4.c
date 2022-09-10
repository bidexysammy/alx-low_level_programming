#include <stdio.h>
#include <stdlib.h>
/**
 * main - this must be present in all program
 *
 * Description: the main function is where compilation begins
 * Return: zero if success
 */
int main(void)
{
	int c, i, m;

	for (c = 0; c <= 9; c++)
	{
		for (i = 0; i <= 9; i++)
		{
			for (m = 0; m <= 9; m++)
			{
				if (c < i && i < m)
				{
					putchar(c + '0');
					putchar(i + '0');
					putchar(m + '0');
					if (c != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
