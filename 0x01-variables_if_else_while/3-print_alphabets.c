#include <stdlib.h>
#include <stdio.h>
/*
 * main - this is present in every program
 * description - the main function is where compiling starts
 * return - zero if success
 */
int main(void)
{
	int c;
	int m;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (m = 'A'; m <= 'Z'; m++)
		putchar(m);
		putchar('\n');
	return (0);
}
