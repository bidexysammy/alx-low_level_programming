#include <stdlib.h>
#include <stdio.h>
/*
 * main - main must be present in every program
 * description - the main function is where compiling begins
 * return - zero if success
 */
int main(void)
{
	int C;

	for (C = 'a'; C <= 'z'; C++)
		putchar(C);
		putchar('\n');
	return (0);
}
