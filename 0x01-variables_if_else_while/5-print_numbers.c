#include <stdlib.h>
#include <stdio.h>

/**
 * main - this must be present
 *
 * Description: this is where the compilation starts
 * Return: zero if success
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		printf("%d", c);
	}
	printf("\n");
	return (0);
}
