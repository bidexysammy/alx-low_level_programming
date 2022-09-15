#include <stdio.h>

/**
 * main - causes an infinite loop
 * Debugging: the part that causes the infinite
 * loop is between line 18 and 19 that ought to contain
 * an incremental i
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

